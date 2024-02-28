#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 *
 */

void puts_half(char *str)
{
	int x = 0;
	int v;

	for (x = 0; str[x] != '\0'; x++)
	{
	}

	v = (x + 1) / 2;

	for (v = (x / 2); v < x; v++)
	{
		_putchar(str[v]);
	}
	_putchar(10);
}
