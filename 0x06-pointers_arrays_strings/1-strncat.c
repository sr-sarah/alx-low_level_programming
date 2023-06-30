#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @n: the parameter
 * @src: the parameter
 * @dest: the parameter
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i])
{
i++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
dest[i + j] = '\0';
}
return (dest);
}
