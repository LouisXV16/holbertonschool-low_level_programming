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
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1;  i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (0);
			}
	}
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
