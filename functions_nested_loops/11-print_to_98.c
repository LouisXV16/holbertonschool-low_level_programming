#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural number from n to 98
 * @n: number n
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		}
	}
	printf("\n");
}
