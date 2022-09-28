#include "main.h"

/**
* factorial - A function to print the factorial of a number
* @n: the integer passed
*
* Return: to return -1 if n is less than 0, and ....
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
