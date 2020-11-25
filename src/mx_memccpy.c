#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n){
    const unsigned char *tmp1 = (unsigned char *)src;
    unsigned char *tmp2 = (unsigned char *)dst;
    for (size_t i = 0; i < n; i++) {
        tmp2[i] = tmp1[i];
        if(tmp2[i] == (char)c) break;
    }
    return dst;
}
