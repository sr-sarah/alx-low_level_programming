#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: the first parameter
 * @src: the second parameter
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i;
int j;

i = 0;
while (*(src + i) != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
dest[j] = src[j];
}
dest[i] = '\0';
return (dest);
}
