#include "main.h"

/**
 * _puts_recursion - A function to print a string using recursion
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	int index = 0;

	if (*s)
	{
		_putchar(s[index]);
		index++;
		_puts_recursion(s + index);
	}
	else
		_putchar('\n');
}
