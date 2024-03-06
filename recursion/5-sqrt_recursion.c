#include "main.h"
#include <stdio.h>

/**
*_square_test - test if the square
*@n: aire du square
*@x: segment du square
*Return: segment
*/

int _square_test(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (_square_test(n, x + 1));
}


/**
*_sqrt_recursion - return the natural square root of a num
*@n: number
*Return: square
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_square_test(n, 0));
}
