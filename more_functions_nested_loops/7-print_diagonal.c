#include "main.h"

/**
 * print_diagonal - draw diagonal on the terminal
 * @n: number of times the \ should be printed
 * Return: always 0
 */

void print_diagonal(int n)
{
	int x;
	int l;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
			for (x = 0; x <= l; x++)
			{
				if (x >= 1)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
