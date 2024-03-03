#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: char to convert
 * Return: value
 */

int _atoi(char *s)
{
	int total = 0;
	int sign = 1;
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '+')
		{
			i++;
		}
		else if (s[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			total = total * 10 + (s[i] - '0');
			i++;
		}
		else
		{
			break;
		}
	}
	return ((total * sign));
}
