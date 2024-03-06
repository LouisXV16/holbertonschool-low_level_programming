#include <stdio.h>
#include <stdlib.h>

/**
*main - print prod of number of arg
*@argc: size of argv
*@argv: array of program
*Return: always 0
*/

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}

