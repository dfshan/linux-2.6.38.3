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
	{ 0xa1c0e8e9, "xfrm4_tunnel_register" },
	{ 0x2be8667f, "xfrm_register_type" },
	{ 0x42f66118, "xfrm4_rcv_encap" },
	{ 0x943eaa7d, "skb_push" },
	{ 0x86d902e2, "xfrm_unregister_type" },
	{ 0x985558a1, "printk" },
	{ 0xada63a3f, "xfrm4_tunnel_deregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel4";


MODULE_INFO(srcversion, "92EF0178327C6B3BF6F9CFD");
