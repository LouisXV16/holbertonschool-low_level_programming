#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy a string
 * @dest : destination
 * @src : source
 * @n : number
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2;

	for (len2 = 0; src[len2] != '\0' && len2 < n; len2++)
	{
		dest[len1] = src[len2];
		len1++;
	}
	if (len2 < n)
	{
		for (len1 = 0; len1 < n; len1++)
		{
			dest[len1] = '\0';
		}
	}
	return (dest);

}
