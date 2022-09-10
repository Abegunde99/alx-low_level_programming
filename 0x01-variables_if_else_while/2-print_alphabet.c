#include <stdio.h>
/**
 * main - Entry point
 *
 * description: A program to print alphabets in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
