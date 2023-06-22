#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 *@n: the number to input
 *
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; n <= 98; n++)
{
_putchar(n);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (i = n; i >= 98; i--)
{
_putchar(n);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar(' ');
}
