#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatanates 2 strings
 * @dest: destination
 * @src: source
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; src[len2] != '\0'; len2++)
	{
		dest[len1] = src[len2];
		len1++;
	}
	dest[len1] = '\0';
	return (dest);
}
