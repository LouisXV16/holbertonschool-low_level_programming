#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array integers
 * @n: number of elements
 * @a: array
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x < n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	putchar(10);
}
