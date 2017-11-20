#include <stdio.h>

int main() {
// cpu 
#if defined(__arm__)
    printf("arm\n");
#endif
#if defined(__armv7a__)
	printf("armv7a");
#endif
#if defined(__armv7l__)
	printf("armv7l");
#endif
#if defined(__ARM_ARCH_7A__)
    printf("ARM_ARCH_7A\n");
#endif
#if defined(__aarch64__)
    printf("aarch64\n");
#endif
#if defined(__i386__)
    printf("i386\n");
#endif
#if defined(__x86_64__)
    printf("x86_64\n");
#endif
#if defined(__mips__)
    printf("mips\n");
#endif
#if defined(__mips64__)
    printf("mips64\n");
#endif

// OS
#if defined _WIN32
    printf("Windows\n");
#endif
#if defined(__linux__)
    printf("Linux\n");
#endif
#if defined(__unix__)
    printf("unix\n");
#endif
#if defined(__posix__)
    printf("POSIX\n");
#endif
#if defined(__APPLE__)
    printf("MAC OS\n");
#endif

    return 0;
}
