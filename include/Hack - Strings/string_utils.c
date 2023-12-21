
#include <stdlib.h>
#include <string.h>

void replaceChar(char *s, char oldChar, char newChar) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == oldChar) {
            s[i] = newChar;
        }
    }
}

char *replaceCharCopy(const char *s, char oldChar, char newChar) {
    size_t length = strlen(s);
    char *result = (char *)malloc((length + 1) * sizeof(char));

    for (size_t i = 0; i < length; ++i) {
        result[i] = (s[i] == oldChar) ? newChar : s[i];
    }

    result[length] = '\0';
    return result;
}

void removeChar(char *s, char c) {
    size_t i, j;
    for (i = 0, j = 0; s[i] != '\0'; ++i) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

char *removeCharCopy(const char *s, char c) {
    size_t length = strlen(s);
    char *result = (char *)malloc((length + 1) * sizeof(char));

    size_t j = 0;
    for (size_t i = 0; i < length; ++i) {
        if (s[i] != c) {
            result[j++] = s[i];
        }
    }

    result[j] = '\0';
    return result;
}

char **lengthSplit(const char *s, int n) {
    size_t len = strlen(s);
    size_t numSubstrings = len / n + (len % n != 0);
    char **result = (char **)malloc(numSubstrings * sizeof(char *));

    for (size_t i = 0, start = 0; i < numSubstrings; ++i, start += n) {
        size_t substringLen = (i == numSubstrings - 1) ? len - start : n;
        result[i] = (char *)malloc((substringLen + 1) * sizeof(char));
        strncpy(result[i], s + start, substringLen);
        result[i][substringLen] = '\0';
    }

    return result;
}
