# 表示把目标文件helloworld.o作为模块进行编译。obj就是object的缩写，-m表示编译成模块。
obj-m += helloworld.o

# 使用绝对路径的方式指定内核的源码路径，根据自己实际路径来
KERNEL_DIR:=/home/t113/t113-v1.1/out/t113/kernel/build

# T113 是 ARM Cortex-A7，32位
ARCH:=arm

# 设置交叉编译工具链
CROSS_COMPILE:=/home/t113/t113-v1.1/out/toolchain/gcc-linaro-5.3.1-2016.05-x86_64_arm-linux-gnueabi/bin/arm-linux-gnueabi-

all:
    # 进到KDIR目录，使用PWD路径下源码和Makefile文件编译驱动模块
	make -C $(KERNEL_DIR) M=$(PWD) \
        ARCH=$(ARCH) \
        CROSS_COMPILE=$(CROSS_COMPILE) \
        modules

clean:
    # 清除编译文件
	make -C $(KERNEL_DIR) M=$(PWD) \
        ARCH=$(ARCH) \
        CROSS_COMPILE=$(CROSS_COMPILE) \
        clean