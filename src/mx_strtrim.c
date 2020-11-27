#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
    if(!str) return NULL;
    int size = mx_strlen(str);
    int space_before = 0;
    int space_after = 0;
    for (int i = 0; mx_isspace(str[i]); i++) {
        space_before++;
    }
    for (int i = mx_strlen(str)-1; mx_isspace(str[i]); i--) {
        space_after++;
    }
    int new_size = size - (space_before + space_after);
    char *result = mx_strnew(new_size);
    return mx_strncpy(result, &str[space_before], new_size);
}
