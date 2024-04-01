#include "lists.h"

/**
 * list_len - return the nbr of elements in a linked list
 * @h: pointer of the head
 * Return: nbr of element in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
