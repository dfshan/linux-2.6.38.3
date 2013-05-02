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
	{ 0xe90dcae0, "__request_module" },
	{ 0x46d676bd, "inet_twsk_put" },
	{ 0x76918c6, "malloc_sizes" },
	{ 0x87a45ee9, "_raw_spin_lock_bh" },
	{ 0x21185463, "mutex_unlock" },
	{ 0x425e3c95, "sock_i_ino" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe9a94d0a, "skb_trim" },
	{ 0xefbebdad, "netlink_kernel_create" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2fa5a500, "memcmp" },
	{ 0x852335bf, "netlink_kernel_release" },
	{ 0xcd279169, "nla_find" },
	{ 0xd3d1a3bb, "netlink_rcv_skb" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xbfaf74ea, "mutex_lock" },
	{ 0x8b2d7912, "sk_free" },
	{ 0x1339b665, "netlink_unicast" },
	{ 0x91e5856d, "init_net" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x364f689, "__alloc_skb" },
	{ 0x6223cafb, "_raw_spin_unlock_bh" },
	{ 0xe0b04c98, "kfree_skb" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xa0fa70fc, "inet6_lookup" },
	{ 0x8d8905a8, "kmem_cache_alloc_trace" },
	{ 0xe909ce03, "_raw_read_lock_bh" },
	{ 0x9bf1e6e, "_raw_read_unlock_bh" },
	{ 0xac220e29, "netlink_dump_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x78fdbb17, "__inet_lookup_listener" },
	{ 0x5739bec6, "skb_put" },
	{ 0xf1293071, "sock_i_uid" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc7b17eb6, "__inet_lookup_established" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "032D8A6420A5AB4907825B3");
