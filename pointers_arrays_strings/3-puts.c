#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: always 0
 */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar('0' + str[n]);
	}
	_putchar(10);
}
