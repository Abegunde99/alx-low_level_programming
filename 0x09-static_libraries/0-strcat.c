#include <stdio.h>
#include "main.h"

/**
 * _strcat - A function to concat strings
 * @dest: The first string entered
 * @src: The second string to be concatinated
 *
 * Return: to return the character dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len++] = src[i];
	}

	return (dest);
}
