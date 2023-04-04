#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - delete node
 *@head: Node adress
 *@index: Delete node position
 *Return: Success (1)
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;

	listint_t *c, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	c = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (c->next == NULL)
			return (-1);
		c = c->next;
	}
	next = c->next;
	c->next = next->next;
	free(next);
	return (1);
}

