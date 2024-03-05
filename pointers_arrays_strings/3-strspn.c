#include "main.h"
#include <stdio.h>

/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: accept
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;

	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
				x++;
				break;
			p++;
		}
		if (*p == '\0')
			return (x);
		s++;
	}
	return (x);
}
