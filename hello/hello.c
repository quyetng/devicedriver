#include <linux/init.h>
#include <linux/module.h>

#define Hello_VERSION		"0.0.1"

static int __init hello_init(void)
{
	printk(KERN_NOTICE "init helloworld driver\n");
	return 0;
}

static void __exit hello_exit(void)
{
	printk(KERN_NOTICE "exit helloworld driver\n");
	return;
}


module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("quyetnguyentan@gmail.com");
MODULE_DESCRIPTION("Hello driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(Hello_VERSION);
