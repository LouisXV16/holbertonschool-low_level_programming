#include "main.h"

/**
 * print_rev - print a string in reverse
 *@s: string
 * Return: always 0
 */

void print_rev(char *s)
{
	int n = 0;
	int l;

	while (s[n] != '\0')
	{
		n++;
	}
	for (l = n - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar(10);
}
