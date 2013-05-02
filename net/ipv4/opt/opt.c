/*
 *
 *  edit by Danfeng Shan(shandanf@gmail.com) on 2012.4.22
 *
 *  include the control parametres and the functions used in our optical system
 *
 *
 */

#include <net/opt/opt.h>

#include <linux/types.h>
#include <linux/sysctl.h>
#include <linux/module.h>
#include <linux/err.h>

#include <net/neighbour.h>
#include <net/arp.h>
#include <net/dst.h>

/* true when enable the optical path */
int opt_open = 0;
EXPORT_SYMBOL(opt_open);

/* the secondary gateway, which is the ip addr of the optical switch 
 * the default value 0.0.0.0 means the optical switch is unavailable
 * using the sysctl to change these values
 */
char sec_gate[16];
EXPORT_SYMBOL(sec_gate);


/*
 * the sysctl table to control the parametres
 *
 */
struct ctl_table_header *opt_cth = NULL;
EXPORT_SYMBOL( opt_cth );

struct ctl_table net_ipv4_opt_table[] = {
	{
		.procname	= "optical_path_open",
		.data		= &opt_open,
		.maxlen		= sizeof(int),
		.mode		= 0644,
		.proc_handler	= proc_dointvec
   	},
	{
		.procname	= "secondary_gateway",
		.data		= &sec_gate,
		.maxlen		= sizeof(char)*16,
		.mode		= 0644,
		.proc_handler	= proc_dostring
   	},
	{ }
};
EXPORT_SYMBOL( net_ipv4_opt_table ); 

struct ctl_path net_ipv4_opt_path[] = {
	{ .procname = "net", },
	{ .procname = "ipv4", },
	{ .procname = "opt", },
	{ },
};
EXPORT_SYMBOL( net_ipv4_opt_path );

/*
 *
 *	this function tend to switch ip address from string format to __be32 format
 *  e.g., input "192.168.1.234" will return 0xea01a8c0
 *
 *
 */

__be32 get_ip_from_str( char ip[] )
{
	__be32 result, factor;
	int i, temp;

	i = 0;
	temp = 0;
	result = 0;
	factor = 1;
	do {
		if( ip[i] == '.' )
		{
			result += temp*factor;	
			factor *= 0x100;
			temp = 0;
		}	
		else if( ip[i] >= '0' && ip[i] <= '9' )
		{
			temp = temp*10 + ip[i] - '0';
			if( temp < 0 || temp > 255 )
				return 0x00000000;
		}
		else
			return 0x00000000;
		i++;
	} while( i < 16 && ip[i] != '\0' );
	result += temp*factor;

	return result;
}

/*
 *
 * this function tend to change the neighbour of a packet to our secondary gateway
 *
 */

int redirect_to_opt( struct dst_entry *dst )
{
	struct net_device *dev = dst->dev;
	struct neighbour *n = dst->neighbour;
	__be32 nexthop;

	if( dev == NULL )
		return -EINVAL;
	nexthop = get_ip_from_str( sec_gate );
	n =	__neigh_lookup_errno( &arp_tbl, &nexthop, dev );
	if( IS_ERR(n) )
		return PTR_ERR(n);
	dst->neighbour = n;
	return 0;
}
