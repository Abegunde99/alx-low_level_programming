#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - Function to return the length of a string
 * @s: the string to get the length of.
 *
 * Return: Value of length of string
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
