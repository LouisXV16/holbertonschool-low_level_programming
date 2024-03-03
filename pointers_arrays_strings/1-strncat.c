#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatanates 2 strings
 * @dest: destination
 * @src: source
 * @n: amount bytes
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; src[len2] != '\0' && len2 < n; len2++)
	{
		dest[len1] = src[len2];
		len1++;
	}
	dest[len1] = '\0';
	return (dest);
}
