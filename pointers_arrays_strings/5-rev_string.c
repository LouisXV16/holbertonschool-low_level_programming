#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string
 *
 */

void rev_string(char *s)
{
	int l, i, t;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	for (i = l - 1; i >= l / 2; i--)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
}
