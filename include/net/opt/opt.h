/*
 *
 *  edit by Danfeng Shan(shandanf@gmail.com) on 2012.4.22
 *
 *  include the control parametres and the functions used in our optical system
 *
 *
 */

#ifndef _OPT_H_
#define _OPT_H_

#include <linux/sysctl.h>
#include <net/dst.h>

/* true when enable the optical path */
extern int opt_open;

/* the secondary gateway, which is the ip addr of the optical switch 
 * the default value 0.0.0.0 means the optical switch is unavailable
 * using the sysctl to change these values
 */
extern char sec_gate[16];


/*
 * the sysctl table to control the parametres
 *
 */
extern struct ctl_table_header *opt_cth;

extern struct ctl_table net_ipv4_opt_table[];

extern struct ctl_path net_ipv4_opt_path[];

__be32 get_ip_from_str( char ip[] );

int redirect_to_opt( struct dst_entry *dst );

#endif
