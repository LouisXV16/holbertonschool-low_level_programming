#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the alphabet in lowercase in reverse
 *
 * Return: always 0
 *
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x++)
		putchar(x);
	putchar(10);
	return (0);
}
