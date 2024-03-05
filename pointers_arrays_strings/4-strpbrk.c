#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: accept
 * Return: x
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
			if (*s == accept[i])
				return (s);
	s++;
	}
	return (NULL);
}
