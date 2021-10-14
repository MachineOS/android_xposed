PRODUCT_COPY_FILES += \
	xposed/prebuilts/framework/lspd.dex:$(TARGET_COPY_OUT_SYSTEM)/framework/lspd.dex \
	xposed/prebuilts/framework/manager.bin:$(TARGET_COPY_OUT_SYSTEM)/framework/manager.bin \
	xposed/prebuilts/lib/64/liblspd.so:$(TARGET_COPY_OUT_SYSTEM)/lib64/liblspd.so \
	xposed/prebuilts/lib/64/libdaemon.so:$(TARGET_COPY_OUT_SYSTEM)/lib64/libdaemon.so \
	xposed/prebuilts/lib/32/liblspd.so:$(TARGET_COPY_OUT_SYSTEM)/lib/liblspd.so \
	xposed/prebuilts/lib/32/libdaemon.so:$(TARGET_COPY_OUT_SYSTEM)/lib/libdaemon.so

PRODUCT_PACKAGES += liblspd
