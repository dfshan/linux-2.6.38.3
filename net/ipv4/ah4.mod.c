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
	{ 0xc7697448, "xfrm4_rcv" },
	{ 0x6c8eb98f, "xfrm_aalg_get_byname" },
	{ 0x141a532d, "crypto_ahash_setkey" },
	{ 0x418b7d60, "crypto_alloc_ahash" },
	{ 0x8d8905a8, "kmem_cache_alloc_trace" },
	{ 0x76918c6, "malloc_sizes" },
	{ 0x76a174e1, "pskb_expand_head" },
	{ 0x4afd4aff, "__pskb_pull_tail" },
	{ 0x9ac70cd0, "xfrm_input_resume" },
	{ 0x2fa5a500, "memcmp" },
	{ 0x6fed3a71, "crypto_ahash_digest" },
	{ 0xb0556f17, "skb_to_sgvec" },
	{ 0xc897c382, "sg_init_table" },
	{ 0x943eaa7d, "skb_push" },
	{ 0x1c7419e0, "skb_cow_data" },
	{ 0xaafb247c, "xfrm_output_resume" },
	{ 0xe85b693b, "__xfrm_state_destroy" },
	{ 0x8cf732c7, "xfrm_state_lookup" },
	{ 0xba6b26dc, "inet_add_protocol" },
	{ 0x2be8667f, "xfrm_register_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a6f928a, "crypto_destroy_tfm" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x86d902e2, "xfrm_unregister_type" },
	{ 0x985558a1, "printk" },
	{ 0xdf832e16, "inet_del_protocol" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3BB66FD9C58A76F3F8836DD");
