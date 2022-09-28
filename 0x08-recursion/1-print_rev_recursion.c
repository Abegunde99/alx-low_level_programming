#include "main.h"

/**
* _print_rev_recursion - A function to print the reverse of a string
* @s: The string to be printed in reverse
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
