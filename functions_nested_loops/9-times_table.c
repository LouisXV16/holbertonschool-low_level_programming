#include "main.h"

/**
 * times_table - print the 9 table
 */

void times_table(void)
{
	int n1, n2, table;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			table = (n1 * n2);
			if (n2 == 0)
			{
				_putchar('0');
			}
			if (table <= 9 && n2 != 0)
			{
				_putchar(' ');
				_putchar('0' + table);
			}
			else if (n2 != 0)
			{
				_putchar('0' + (table / 10));
				_putchar('0' + (table % 10));
			}
			if (n2 < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar(10);
	}
}
