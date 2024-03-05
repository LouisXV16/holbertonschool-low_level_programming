#include "main.h"
#include <stdio.h>

/**
 * *_strchar - locate a char in a string
 * @s: string
 * @c: char
 * Return: s or null
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
		if (*s == c)
			return (s);
	if (c == '\0')
		return (s);
	return (NULL);
}
