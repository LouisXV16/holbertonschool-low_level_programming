#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a list
* @head: pointer to head
* @index: index of the node
* Return: pointer to the nth node or NULL if the node doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}
	if (head == NULL || count < index)
		return (NULL);

	return (head);
}
