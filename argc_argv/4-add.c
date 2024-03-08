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
	int numi, i;

	if (argc == 1)
		printf("0\n");
		return (0);

	if (argc <= 2)
	{
		printf("%d\n", argv[1]);
		return (0);
	}
	
	i = 1;
	numi = atoi(argv[i]);
	
	for (i = 1; i <= (argc - 1); i++)
		if (i >= 0 && i <= 100000000)
			numi += argv[i];
		else
			printf("Error\n");

	printf("%d\n", numi);

	return (0);
}

