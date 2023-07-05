#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: the parameter
 *
 * Return: Nothing
 */

int main(void)
{
int i;
int j;
int sum;
int passwd[100];

sum = 0;
srand(time(NULL));

while (i = 0; i < 100; i++)
{
passwd[i] = rand() % 78;
sum += (passwd[i] + '0');
_putchar(passwd[i] + '0');

if ((2772 - sum) - '0' < 78)
{
j = 2772 - sum -'0';
sum += j;
_putchar(j + '0');
break;
}
}
return (0);
}
