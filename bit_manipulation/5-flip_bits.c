#include "main.h"

/**
* flip_bits - returns nbr of bits needed to flip to get from one nbr to another
* @n: nb 1 to compare
* @m: nb 2 to compare
* Return: nb of différent bits in n & m
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int difference = n ^ m;
    unsigned int count = 0;

    while (difference > 0)
    {
        count += difference & 1;
        difference >>= 1;
    }
    return (count);
}
