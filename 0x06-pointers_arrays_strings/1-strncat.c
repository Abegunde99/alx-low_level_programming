#include "main.h"
#include <stdio.h>

/**
 * _strncat - A function to concat strings with number of bytes
 * @dest: The first string.
 * @src: The second string.
 * @n: The number of bytes in integer
 *
 * Return: return dest i.e the total string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	i = 0;
	dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	dest[dest_len++] = '\0';

	return (dest);
}
