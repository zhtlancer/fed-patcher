#define CONFIG_EXTRA_LDFLAGS "-Xlinker -z -Xlinker muldefs -nostdlib -Bdynamic -Xlinker -dynamic-linker -Xlinker /system/bin/linker -Xlinker -z -Xlinker nocopyreloc -Xlinker --no-undefined ${SYSROOT}/usr/lib/crtbegin_dynamic.o ${SYSROOT}/usr/lib/crtend_android.o"