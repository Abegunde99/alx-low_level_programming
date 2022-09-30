#include "main.h"
#include <stdio.h>

/**
 * _strncpy - A function to copy some part of a string
 * @dest: The initial string
 * @src: The string to be copied
 * @n: the length of string to be copied
 *
 * Return: return dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
