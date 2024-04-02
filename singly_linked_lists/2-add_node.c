#include "lists.h"

/**
 * add_node - add new node at the beginning of a list
 * @head: pointer to pointer to the head node
 * @str: pointer to the string
 * Return: adress of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *new_str;

	if (new_node == NULL)
		return (NULL);

	new_str = strdup(str);

	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
