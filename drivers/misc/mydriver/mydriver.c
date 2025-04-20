#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Suba Lakshmi");
MODULE_DESCRIPTION("A simple Linux driver");

static int __init mydriver_init(void) {
    printk(KERN_INFO "My driver loaded!\n");
    return 0;
}

static void __exit mydriver_exit(void) {
    printk(KERN_INFO "My driver unloaded!\n");
}

module_init(mydriver_init);
module_exit(mydriver_exit);
