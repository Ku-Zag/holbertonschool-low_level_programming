#include "main.h"

/**
 * Copies at most n characters from the source string src to the destination
 * string dest. If src is less than n characters long, the remainder of dest
 * is filled with '\0' characters.
 * @param dest Pointer to the destination string.
 * @param src Pointer to the source string.
 * @param n Maximum number of characters to copy.
 * @return A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n) {
    int i;
    
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    for (; i < n; i++) {
        dest[i] = '\0';
    }

    return dest;
}

