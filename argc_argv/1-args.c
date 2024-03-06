#include <stdio.h>

/**
*main - print number of arguments
*@argc: size of argv
*@argv: array of program
*Return: always 0
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

