#include "../inc/libmx.h"

bool mx_isdigit(int c) {
    if (c >= 49 && c <= 57) {
        return true;
    } 
    else {
        return false;
    }
}
