#include "main.h"
/**
 * _atoi -  convert a string to an integer.
 * @s: the parameter
 *
 * Return: the integer converted from the string s.
 */

int _atoi(char *s)
{
int i = 0;
int sign = 1;
int len = 0;
int number = 0;
int digit = 0;

while (s[i] != '\0')
len++;

if (s[i] == '-')
{
sign = -1;
i++;
}

else if (s[i] == '+')
{
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
length++;
i++;
}

for (i = 0; i < length; i++)
{
digit = s[i] - '0';
number = number * 10 + digit;
}
resNum = (number) *(sign);
return (resNum);
}
