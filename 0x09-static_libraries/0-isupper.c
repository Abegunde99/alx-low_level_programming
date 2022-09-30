#include <stdio.h>
#include "main.h"

/**
 * _isupper - function to check if a char is uppercase
 * @c: The character to be checked
 * Return: 1 if it's uppercase and 0 is it's not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
