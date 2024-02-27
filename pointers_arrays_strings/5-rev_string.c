#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string
 *
 */

void rev_string(char *s)
{
	int n, l;

	for (n = 0; s[n] != '\0'; n++)
	{
		putchar(s[n]);
	}
	putchar(10);
	for (l = n - 1; l >= 0; l--)
	{
		putchar(s[l]);
	}
	putchar(10);
}
