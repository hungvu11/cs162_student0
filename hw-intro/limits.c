#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit lim;
    if (getrlimit(RLIMIT_STACK, &lim) == -1) return -1;
    printf("stack size: %ld\n", lim.rlim_cur);
    if (getrlimit(RLIMIT_NPROC, &lim) == -1) return -1;
    printf("process limit: %ld\n", lim.rlim_cur);
    if (getrlimit(RLIMIT_NOFILE, &lim) == -1) return -1;
    printf("max file descriptors: %ld\n", lim.rlim_cur);
    return 0;
}
