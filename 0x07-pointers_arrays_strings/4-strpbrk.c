#include "main.h"
/**
 * _strpbrk - function that searches a string
 * for any of a set of bytes.
 * @s: the first param
 * @accept: the second param
 * Return: a pointer to the byte in s
 * that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *c = accept;
while (*c != '\0')
{
if (*s == *c)
return (s);
c++;
}
s++;
}
return ('\0');
}
