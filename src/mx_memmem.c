#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    const unsigned char *tmp1 = (const unsigned char *)big;
    const unsigned char *tmp2 = (const unsigned char *)little;
    if(big_len == 0  || little_len == 0) return 0; 
    const unsigned char *tmp = mx_memchr(tmp1, tmp2[0] , big_len);
    while(tmp != '\0'){
      if(mx_memcmp(tmp, tmp2, little_len) == 0){
        return (char *)tmp;
      }
      tmp++;
    }  
    return 0;
}
