#include "main.h"

/**
 * _isalpha - check for alphabetic character
 *@c: character to be checked
 * Return: 1 if c is letter, 0 else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
