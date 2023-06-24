#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: 0 on success
 */

void more_numbers(void)
{
int i;
int j;
int k;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
k = j % 10;
if (j > 9)
_putchar('1');
_putchar(k + '0');
}
_putchar ('\n');
}
