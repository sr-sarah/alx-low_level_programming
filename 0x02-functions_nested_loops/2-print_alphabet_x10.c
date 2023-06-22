#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 * Description: prints 10 times the alphabet in lowercase.
 * Return: Always0 (success).
 */
void print_alphabet_x10(void)
{
int a;
char alpha;
for (a = 1; a <= 10; a++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
