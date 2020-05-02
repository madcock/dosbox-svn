#ifndef __LIBRETRO_DYNAREC__
#define __LIBRETRO_DYNAREC__

/* dynarec flags */
#ifdef DISABLE_DYNAREC
#elif defined(__aarch64__) || _M_ARM64
#define C_DYNREC 1
#define C_TARGETCPU ARMV8LE
#define C_UNALIGNED_MEMORY 1
#elif defined(__arm__) && (__ARM_ARCH >= 7 || defined(__ARM_ARCH_7A__) || defined(__thumb2__))
#define C_DYNREC 1
#define C_TARGETCPU ARMV7LE
#define C_UNALIGNED_MEMORY 1
#elif defined(__arm__) || _M_ARM
#define C_DYNREC 1
#define C_TARGETCPU ARMV4LE
#elif defined(__x86_64__) || _M_AMD64
#define	C_DYNAMIC_X86 1
#define C_TARGETCPU X86_64
#elif defined(__i386__) || _M_IX86
#define C_DYNAMIC_X86 1
#define C_TARGETCPU X86
#elif defined(__mips__) && defined(__MIPSEL__)
#define C_DYNREC 0
#define C_TARGETCPU MIPSEL
#endif

#endif
