#include "main.h"
/**
 *print_times_table - prints the n times table
 *@n: the input number
 *
 *
 */
void print_times_table(int n)
{
int i;
int m;
int p;
if (n <= 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
_putchar(48);
for (m = 1; m <= i; m++)
{
_putchar(',');
_putchar(' ');
p = i * m;
if (p <= n)
{
_putchar(' ');
}
else
{
_putchar((p / 10) + 48);
}
_putchar((p % 10) + 48);
}
_putchar('\n');
}
}
}
