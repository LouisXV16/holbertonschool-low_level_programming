#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locate a substring
 * @haystack: string
 * @needle: subtring
 * Return: located of substring or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int needle_len = 0;

	while (needle[needle_len] != '\0')
	{
		needle_len++;
	}

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0' && haystack[i] == needle[i]; i++)
		{
		}
		if (i == needle_len)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

