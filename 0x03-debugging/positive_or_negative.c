#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Funtion to print negative or positive
 * @n: an integer
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
}
