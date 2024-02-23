#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char x;
	int l;

	for (l = 1; l <= 10; l++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar(10);
	}
}
