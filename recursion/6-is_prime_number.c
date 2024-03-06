#include "main.h"

/**
*_prime - check if prime
*@n: number
*@x: dividende
*Return: 0 or 1
*/

int _prime(int n, int x)
{
	if (x * x > n)
		return (1);
	if (x * x == n)
		return (0);
	return (_prime(n, x + 1));
}


/**
*is_prime_number - return if is a prime number
*@n: number
*Return: 0 or check
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % 2 == 0)
		return (0);
	else
		return (_prime(n, 2));
}
