#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print a single digit numbers
 *
 * Return: always 0
 *
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar(10);
	return (0);
}
