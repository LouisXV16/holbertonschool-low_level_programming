#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: numbers of underscore
 * Return: always 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		if (n == 2)
		{
			for (n = 1; n <= 2; n++)
				_putchar('_');
		}
		else
		{
			for (n = 1; n <= 10; n++)
				_putchar('_');
		}
	}
	_putchar(10);
}
