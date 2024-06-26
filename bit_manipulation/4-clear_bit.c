#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: pointer to number
* @index: index of the wanted bit
* Return: 1 if it worked or -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
