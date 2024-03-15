#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - allocate memory
 * @nmemb: nbr elements
 * @size: bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	ptr = (char *)p;

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (p);
}
