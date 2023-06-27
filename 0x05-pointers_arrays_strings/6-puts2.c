#include "main.h"
/**
 * puts2 - returns the length of a string.
 * @str: the parameter
 *
 * Return: Nothing
 */

void puts2(char *str)
{
int i = 0;
int j = 0;
char *c = str;
int k;

while (*c != '\0')
{
c++;
i++;
}

j = i - 1;
for (k = 0; k <= j; k++)
{
if (k % 2 == 0)
{
_putchar(str[k]);
}
}
_putchar('\n');
}
