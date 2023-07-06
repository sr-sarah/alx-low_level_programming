#include "main.h"
/**
 * is_it_prime - test if a number is prime
 * @n: number
 * @i: parameter
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_it_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (is_it_prime(n, i - 1));
}

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0.
 * @n: the parameter
 *
 * Return: 1 if the input integer is a prime number,
 * 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_it_prime(n, n - 1));
}
