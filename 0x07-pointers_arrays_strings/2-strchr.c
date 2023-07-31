#include <stddef.h> // For NULL

char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s; // Found the character, return the pointer to it
        }
        s++;
    }
    return NULL; // Character not found in the string
}
