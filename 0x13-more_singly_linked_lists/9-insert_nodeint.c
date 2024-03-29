#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index - new node insert
 *@head: adress
 *@idx: new node position
 *@n: New data node
 *Return: New node adress
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;

	unsigned int x = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (; x < idx - 1 && tmp != NULL; x++)
			tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
