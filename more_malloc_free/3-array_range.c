#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: /
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (p == 0)
		return (NULL);
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
