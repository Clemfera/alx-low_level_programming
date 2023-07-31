#include <stddef.h>

unsigned int _strspn(char *s, char *accept) {
    unsigned int length = 0;
    while (*s != '\0') {
        char *a = accept;
        while (*a != '\0') {
            if (*s == *a) {
                length++;
                break;
            }
            a++;
        }
        if (*a == '\0') {
            // Character in s not found in accept, return the length
            return length;
        }
        s++;
    }
    return length;
}
