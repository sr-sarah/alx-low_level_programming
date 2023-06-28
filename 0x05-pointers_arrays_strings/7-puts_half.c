#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the parameter
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
int i;
int len = 0;
int n;

for (i = 0; str[i] != '\0'; i++)
{
len++;
}

if ((len % 2) == 0)
{
n = len / 2;
}

else if ((len % 2) == 1)
{
n = ((len + 1) / 2);
}

for (i = n; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
