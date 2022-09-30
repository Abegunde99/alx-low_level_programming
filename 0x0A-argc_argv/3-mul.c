#include <stdio.h>
#include <stdlib.h>

/**
* main - A function to print the multiplication of arguments passed
* @argc: the number of arguments passed
* @argv: the array of arguments
*
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int i = 0;
	int mul = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}

	return (0);
}
