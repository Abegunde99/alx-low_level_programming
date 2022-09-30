#include <stdio.h>
#include "main.h"

/**
 * _isdigit - A funtion to check if a digit is between 0 and 9
 * @c: The char to be checked
 *
 * Return: 1 if it's between 0 and 9, and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
