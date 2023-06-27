#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: the parameter
 *
 * Return: Nothing
 */

int _strlen(char *s)
{
int i;
do {
i++;
s++;
} while (*s != '\0');
return (i);
}
