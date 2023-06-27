#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: the parameter
 *
 * Return: Nothing
 */

int _strlen(char *s)
{
int i = 0;
do {
i++;
s++;
} while (*(s - 1) != '\0');
return (i - 1);
}
