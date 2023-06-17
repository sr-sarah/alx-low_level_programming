#include <stdio.h>
/**
 * main - Entry point of the program
 *Program that prints the alphabet in lowercase and upcase
 * Return: 0 on success
 */
int main(void)
{
char alpha_min = 'a';
char alpha_maj = 'A';
while (alpha_min <= 'z')
{
putchar(alpha_min);
alpha_min++;
}
while (alpha_maj <= 'Z')
{
putchar(alpha_maj);
alpha_maj++;
}
putchar('\n');
return (0);

