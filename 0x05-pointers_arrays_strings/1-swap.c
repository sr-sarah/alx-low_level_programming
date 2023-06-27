#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: the first parameter
 * @b: the second parameter
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
