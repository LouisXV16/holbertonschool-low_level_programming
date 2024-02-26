#include "main.h"
#include <stdio.h>

/**
 * _strlen -  returns the length of a string
 * @s: leng
 * Return: the length of a string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + (_strlen(s + 1)));
}
