#include <stdio.h>

int main() {
// cpu 
#if defined(__arm__)
    printf("arm\n");
#endif
#if defined(__ARM_ARCH_7A__)
    printf("arm7a");
#endif
#if defined(__aarch64__)
    printf("__aarch64__\n");
#endif
#if defined(__i386__)
    printf("__i386__\n");
#endif
#if defined(__x86_64__)
    printf("__x86_64__\n");
#endif
#if defined(__mips__)
    printf("__mips__\n");
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
    printf("__unix__\n");
#endif
#if defined(__posix__)
    printf("POSIX\n");
#endif
#if defined(__APPLE__)
    printf("MAC OS\n");
#endif

    return 0;
}