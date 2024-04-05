#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return: converted nbr or 
* 0 if b = NULL 
* & if there is another character in b
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_nbr = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
	converted_nbr = (converted_nbr << 1) + (*b - '0');
	b++;
	}
	return (converted_nbr);
}
