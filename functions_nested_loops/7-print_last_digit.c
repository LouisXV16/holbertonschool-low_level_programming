#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: number to be checked
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	return (last_digit);
}
