#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9
 *
 * Return : always 0
 */

void print_most_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)
		if (n != 2 || n != 4)
			_putchar(n);
	_putchar(10);
}
