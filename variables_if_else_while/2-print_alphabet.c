#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 *
 * Return: always 0
 *
 */

int main(void)
{
	init x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar(10);
	return (0);
}
