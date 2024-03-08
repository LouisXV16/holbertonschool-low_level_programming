#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - check the code
 * @a: pointer char
 */

void print_chessboard(char (*a)[8])
{
	int i1;
	int i2;

	for (i1 = 0; i1 < 8; i1++)
	{
		for (i2 = 0; i2 < 8; i2++)
		{
			_putchar(a[i1][i2]);
		}
		_putchar(10);
	}
}
