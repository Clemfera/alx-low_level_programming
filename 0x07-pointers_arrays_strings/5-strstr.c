#include <stddef.h> // For NULL

char *_strstr(char *haystack, char *needle) {
    if (*needle == '\0') {
        // Empty substring found at the beginning of the haystack
        return haystack;
    }

    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;

        // Check if the substring matches the remaining part of the haystack
        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }

        // If the entire substring is found, return the starting position
        if (*n == '\0') {
            return haystack;
        }

        // Move to the next character in the haystack
        haystack++;
    }

    // Substring not found
    return NULL;
}
