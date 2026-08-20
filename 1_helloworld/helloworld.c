#include <linux/module.h>
#include <linux/init.h>

static int helloworld_init(void)
{
    printk("======HelloWorld Init=====\n");

    return 0;
}

static void helloworld_exit(void)
{
    printk("=====HelloWorld Exit=====\n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("t113");
MODULE_VERSION("v1.0");

