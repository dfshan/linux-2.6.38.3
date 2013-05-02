#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x54529488, "module_layout" },
	{ 0x9d0f8a60, "ip_local_out" },
	{ 0x593e653d, "__ip_select_ident" },
	{ 0x943eaa7d, "skb_push" },
	{ 0xd2cf7cd, "consume_skb" },
	{ 0xda80b608, "sock_wfree" },
	{ 0x30242952, "skb_realloc_headroom" },
	{ 0x9b6df7ab, "icmp_send" },
	{ 0x71de9b3f, "_copy_to_user" },
	{ 0x923aee98, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x7dceceac, "capable" },
	{ 0x77e2f33, "_copy_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x18fd72b9, "register_netdev" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe0b04c98, "kfree_skb" },
	{ 0x8181cdc, "netif_rx" },
	{ 0x37a0cba, "kfree" },
	{ 0x7628f3c7, "this_cpu_off" },
	{ 0x14de8c6b, "__secpath_destroy" },
	{ 0x5d68a8e6, "__xfrm_policy_check" },
	{ 0xa1c0e8e9, "xfrm4_tunnel_register" },
	{ 0x4a9ddffe, "register_pernet_device" },
	{ 0xf2f551, "register_netdevice" },
	{ 0x55f2580b, "__alloc_percpu" },
	{ 0xb027284d, "dev_alloc_name" },
	{ 0x349cba85, "strchr" },
	{ 0x2de9260d, "alloc_netdev_mqs" },
	{ 0xe914e41e, "strcpy" },
	{ 0x672144bd, "strlcpy" },
	{ 0x9691ac44, "__dev_get_by_index" },
	{ 0x10103a49, "dst_release" },
	{ 0x50ea5143, "ip_route_output_key" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x2b9d4007, "__per_cpu_offset" },
	{ 0x35e0d11, "cpu_possible_mask" },
	{ 0xf16b8548, "free_netdev" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xd9d1abf4, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc3793c00, "unregister_pernet_device" },
	{ 0x985558a1, "printk" },
	{ 0xada63a3f, "xfrm4_tunnel_deregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel4";


MODULE_INFO(srcversion, "4FE835945E629D382641A6E");
