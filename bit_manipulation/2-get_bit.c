#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num_bit, bit_value;

	num_bit = (sizeof(unsigned long int) * 8);

	if (index > num_bit)
		return (-1);

	bit_value = ((n >> index) & 1);

	return (bit_value);
}
