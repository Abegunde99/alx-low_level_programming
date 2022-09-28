#include "main.h"

/**
* _strlen_recursion - A function to return the length of a string
* @s: The string to the counted
*
* Return: return the length of the string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
