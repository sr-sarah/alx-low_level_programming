#include "main.h"
/**
 *rev_string - reverses a string.
 * @s: the parameter
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
int len;
int i;
char c;

while (*s != '\0')
len++;
for (i = 0; i < len / 2; i++)
{
c = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = c;
}
}
