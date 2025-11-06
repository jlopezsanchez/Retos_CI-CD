#include <stdio.h>
#include <stddef.h>
#include <string.h>

size_t mi_strlen(const char *s) {
    size_t length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

int mi_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

char *mi_strcpy(char *dest, const char *src) {
    char *original_dest = dest;
    while ((*dest++ = *src++) != '\0');
    return original_dest;
}

