#include "main.h"

/**
 * print_diagonal - draws line
 * @n: input
 * Return: resule
 */

void print_diagonal(int n)
{
if (n <= 0)
_putchar('\n')
else
{
for (i = 1; i <= n; i++)
{
_putchar (32 * (i - 1) + 92);
_putchar ('\n');
}
_putchar ('\n');
}
