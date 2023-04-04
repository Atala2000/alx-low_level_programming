#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Finds node
 * @head: !st node adress
 * @index: Node position
 * Return: Adress of node
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	insigned int x = 0;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
