#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function
 * @array: array
 * @size: size of array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
