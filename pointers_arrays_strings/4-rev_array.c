#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer a
 * @n: number of element
 * Return:
 */

void reverse_array(int *a, int n)
{
	int len1;
	int len2 = n - 1;
	int t;

	for (len1 = 0; len1 < n / 2; len1++)
	{
		t = a[len1];
		a[len1] = a[len2];
		a[len2--] = t;

	}
}
