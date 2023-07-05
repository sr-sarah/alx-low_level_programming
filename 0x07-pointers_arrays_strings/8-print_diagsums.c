#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  function that prints the sum
 * of the two diagonals of a square matrix of integers.
 * @a: parameter
 * @size: parameter
 * Return: none
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
i = size - 1;
do
{
sum2 += a[i * size + (size - i - 1)];
i--;
}
while (i >= 0);
printf("%d, %d\n", sum1, sum2);
}
