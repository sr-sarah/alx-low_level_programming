#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: the first input
 * @accept: the second input
 * Return: the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int i;
while (*s != '\0')
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
n++;
break;
}
else if (accept[i + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
