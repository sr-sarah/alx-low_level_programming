#include "main.h"

/**
 * _isdigit - check if c is a digit
 * @c: the character to be checked
 * Return: 1 if its a digit, 0 if not
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
