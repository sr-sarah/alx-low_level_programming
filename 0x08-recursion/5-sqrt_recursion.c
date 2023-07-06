#include "main.h"
/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number.
 * @n: the given number
 *
 * Return: the natural square root of a number.
 */
int sqrt(int n, int i);
int _sqrt_recursion(int n)
{
return (sqrt(n, 1));
}

/**
 * _sqrt - return square root of a number
 * @n: the first parameter (given number)
 * @i: the second parameter
 *
 * Return: the square root of the number.
 */
int sqrt(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i < n)
return (sqrt(n, i + 1));
else
return (-1);
}
