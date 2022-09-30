#include "main.h"
#include <stdio.h>

/**
 * _strcmp - A function to compare two strings
 * @s1: A pointer of te string to be compared
 * @s2: A pointer to the second strin to be compared
 *
 * Return: If str1 < str2, a negative difference is returned
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

