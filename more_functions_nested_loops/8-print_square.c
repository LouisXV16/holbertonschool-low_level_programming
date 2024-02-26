#include "main.h"

/**
 * print_square - that prints a square
 * @size: size of the square
 * Return: always 0
 */

void print_square(int size)
{
	int x, l;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (x = 1; x <= size; x++)
				_putchar('#');
		_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
