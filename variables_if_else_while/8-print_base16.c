#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all numbers of hexadecimal in lowercase
 *
 * Return: always 0
 *
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar(10);
	return (0);
}
