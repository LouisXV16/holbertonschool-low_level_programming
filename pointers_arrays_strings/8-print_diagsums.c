#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of square
 * @a: array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int x;

	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x * size + x];
	}
	for (x = 0; x < size; x++)
	{
		sum2 += a[x * size + (size - 1 - x)];

	}
	printf("%d, %d\n", sum1, sum2);
}
