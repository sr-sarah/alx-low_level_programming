#include "main.h"
/**
 * _strncpy -  copies a string.
 * @dest: the parameter 1
 * @src: the parameter 2
 * @n: the parameter 3
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0';)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}

