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
k = j % 10;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
_putchar(1 + '0');
_putchar(k + '0');
}
_putchar ('\n');
}
