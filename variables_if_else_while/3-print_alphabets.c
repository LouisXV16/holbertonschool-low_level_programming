#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the alphabet in lowercase and uppercase
 *
 * Return: always 0
 *
 */

int main(void)
{
	int x;
	int X;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (X = 'A'; X <= 'Z'; X++)
		putchar(X);
	putchar(10);
	return (0);
}
