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
	{ 0x9ff4401d, "xfrm4_prepare_output" },
	{ 0xab8929ba, "xfrm_prepare_input" },
	{ 0xf6388c56, "sysctl_ip_default_ttl" },
	{ 0x593e653d, "__ip_select_ident" },
	{ 0xa3a5be95, "memmove" },
	{ 0x76a174e1, "pskb_expand_head" },
	{ 0x4afd4aff, "__pskb_pull_tail" },
	{ 0xd96377fe, "xfrm_register_mode" },
	{ 0x10208eed, "xfrm_unregister_mode" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7374063E2F17904F7306626");
