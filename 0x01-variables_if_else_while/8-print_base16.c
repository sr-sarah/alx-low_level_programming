#include <stdio.h>
/**
 * main - Entry point of the program
 * program that prints all the numbers of base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = 0; a <= 15; a++)
{
if (a < 10)
{
putchar('0' + a);
}
else
{
putchar('A' + (a - 10));
}
}
putchar('\n');
return (0);
}
