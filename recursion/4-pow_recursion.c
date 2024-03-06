#include "main.h"
#include <stdio.h>

/**
*_pow_recursion - return the value of x raided to the power of y
*@x: base
*@y: exponent
*Return: the x value
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 1 || y == 0)
		return (1);
	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
