#include <stdio.h>
/**
 * main - Entry point of the program
 *Program that prints the alphabet
 * Return: 0 on success
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{putchar(alpha);
alpha++; }
putchar('\n');
return (0);
}
