#include <stdio.h>
/**
 * main - Entry point of the program
 *program that prints the alphabet in lowercase except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z' && alpha != 'e' && alpha != 'q'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
