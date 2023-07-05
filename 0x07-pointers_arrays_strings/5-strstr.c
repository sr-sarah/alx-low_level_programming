#include "main.h"
/**
 * _strstr -  function that locates a substring
 * @haystack: the first input
 * @needle: the second input
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *i = haystack;
char *j = needle;
while (*i == *j && *j != '\0')
{
i++;
j++;
}
if (*j == '\0')
return (haystack);
haystack++;
}
return (0);
}
