#include <stdlib.h>
#include <stdio.h>

/**
* main - funtion to print the number of arguements passed into the cl
* @argc: the number of strings/elements passed
* @argv: the array passed
*
* Return: always return 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}
