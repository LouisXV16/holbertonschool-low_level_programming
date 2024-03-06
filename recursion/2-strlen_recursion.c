#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return the length
 *@s: string
 * Return : n
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (s[n] != '\0')
	{
		_strlen_recursion(s + 1);
	}
	return (n);
}
