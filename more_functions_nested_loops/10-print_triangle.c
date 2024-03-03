#include "main.h"

/**
 * print_triangle - print a triangle
 * @size:
 *
 * Return: Always
 */

void print_triangle(int size)
{
	int l, c;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (c = size - l; c > 0; c--)
			{
				_putchar(' ');
			}
			for (c = l; c > 0; c--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

