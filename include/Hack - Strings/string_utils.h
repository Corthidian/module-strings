
#ifndef STRING_UTILS_H
#define STRING_UTILS_H

void replaceChar(char *s, char oldChar, char newChar);
char *replaceCharCopy(const char *s, char oldChar, char newChar);
void removeChar(char *s, char c);
char *removeCharCopy(const char *s, char c);
char **lengthSplit(const char *s, int n);

#endif 
