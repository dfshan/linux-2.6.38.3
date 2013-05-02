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
	{ 0x4b6f73a, "ipcomp_output" },
	{ 0x8bee3e6d, "ipcomp_input" },
	{ 0xba4909a3, "ipcomp_destroy" },
	{ 0xc7697448, "xfrm4_rcv" },
	{ 0xa20ce1b8, "net_msg_warn" },
	{ 0xba6b26dc, "inet_add_protocol" },
	{ 0x2be8667f, "xfrm_register_type" },
	{ 0xe85b693b, "__xfrm_state_destroy" },
	{ 0xeaa12a26, "xfrm_state_insert" },
	{ 0x71db948f, "xfrm_init_state" },
	{ 0x17a00267, "xfrm_state_alloc" },
	{ 0x8cf732c7, "xfrm_state_lookup" },
	{ 0x4e0fe252, "ipcomp_init_state" },
	{ 0x86d902e2, "xfrm_unregister_type" },
	{ 0x985558a1, "printk" },
	{ 0xdf832e16, "inet_del_protocol" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";


MODULE_INFO(srcversion, "EB620C86739DEF71E5136E9");
