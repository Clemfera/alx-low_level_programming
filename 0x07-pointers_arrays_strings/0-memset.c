#include <stddef.h> // For size_t

char *_memset(char *s, char b, unsigned int n) {
    for (size_t i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}
