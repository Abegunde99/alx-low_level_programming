#include "main.h"

/**
* _pow_recursion - A function to return an interger raised to another integer
* @x: The first integer passed
* @y: The second integr passed
*
* Return: The multiplication total
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
