#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: character te be checked
 * Return: 1 if is a digit, 0 else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
