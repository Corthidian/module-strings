
#include <stdio.h>
#include "string_utils.h"

int main() {
    char str1[] = "Hello World!";
    replaceChar(str1, 'o', 'x');
    printf("replaceChar: %s\n", str1);  

    const char *str2 = "Programming is fun!";
    char *newStr2 = replaceCharCopy(str2, 'i', '*');
    printf("replaceCharCopy: %s\n", newStr2);  
    free(newStr2);

    char str3[] = "C Programming";
    removeChar(str3, ' ');
    printf("removeChar: %s\n", str3);  

    const char *str4 = "Data Structures";
    char *newStr4 = removeCharCopy(str4, ' ');
    printf("removeCharCopy: %s\n", newStr4);  
    free(newStr4);

    const char *str5 = "Hello World, how are you?";
    char **substrings = lengthSplit(str5, 3);
    printf("lengthSplit:\n");
    for (size_t i = 0; substrings[i] != NULL; ++i) {
        printf("%s\n", substrings[i]);
        free(substrings[i]);
    }
    free(substrings);

    return 0;
}
