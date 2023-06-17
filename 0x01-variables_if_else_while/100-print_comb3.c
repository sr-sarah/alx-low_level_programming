#include <stdio.h>
/**
 * main - Entry point of the program
 *program that prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n1, n2;
for (n1 = 0; n1 <= 9; n1++)
{
for (n2 = 0; n2 <= 9; n2++)
{
putchar('0' + n1);
putchar(',');
putchar(' ');
putchar('0' + n2);
}
}
putchar('\n');
return (0);
}
