#include "main.h"

/**
 * print_rev - print a string in reverse
 *@s: string
 * Return: always 0
 */

void print_rev(char *s)
{
	int n = 0;

	for (n--; n >= 0; n--)
		_putchar(s[n]);
	_putchar(10);
}
