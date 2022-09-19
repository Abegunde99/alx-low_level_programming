#include <stdio.h>
#include "main.h"

/**
 * swap_int - A function to swap integers
 * @a: The first integer passed
 * @b: The second integer passed
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
