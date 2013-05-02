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
	{ 0xd57416a7, "tcp_reno_min_cwnd" },
	{ 0xe53cdd32, "tcp_reno_ssthresh" },
	{ 0x155884b5, "tcp_reno_cong_avoid" },
	{ 0xa70150a6, "tcp_register_congestion_control" },
	{ 0x56b539e0, "tcp_unregister_congestion_control" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8BFC408F81AB96C2D21A317");
