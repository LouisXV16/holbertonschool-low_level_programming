#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the alphabet in lowercase except q and e
 *
 * Return: always 0
 *
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
		continue;
		}
	putchar(x);
	}
	putchar(10);
	return (0);
}
