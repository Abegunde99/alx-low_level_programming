#include <stdlib.h>
#include <stdio.h>

/**
* main - Function to print the name of a file
* @argc: The number of strings in the array argv
* @argv: the array
*
* Return: To return 0
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
