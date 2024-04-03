#include "lists.h"

/**
* sum_dlistint - return the sum of all data (n) of a list
* @head: pointer to head
* Return: sum of all data (n) or 0 if empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
