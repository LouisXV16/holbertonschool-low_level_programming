#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: numbers of underscore
 * Return: always 0
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
			_putchar('_');
	}
	_putchar(10);
}
