

STAGING_DIR=/home/jagadeesh/openwrt/openwrt/staging_dir/toolchain-powerpc_8540_gcc-4.8-linaro_uClibc-0.9.33.2

CC=/home/jagadeesh/openwrt/openwrt/staging_dir/toolchain-powerpc_8540_gcc-4.8-linaro_uClibc-0.9.33.2/bin/powerpc-openwrt-linux-

lsb8:	lsb8.c
	$(CC)gcc  -g lsb8.c -o lsb8 

clean:
	rm lsb8