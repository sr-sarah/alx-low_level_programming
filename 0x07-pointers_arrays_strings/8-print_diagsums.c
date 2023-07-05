#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int i = 0;
do
{
sum1 = sum1 + a[i * size + i];
i++;
}
while (i < size);
for (i = size - 1; i >= 0; i--)
{
sum2 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
