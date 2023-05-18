#include "lists.h"
/**
 * insert_dnodeint_at_index - adds node
 * @h: Head
 * @idx: index
 * @n: int
 * Return: list
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int count = 0;

	if (h == NULL || new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->next = NULL;
	new_n->prev = NULL;
	current = *h;

	if (idx == 0)
	{
		new_n = add_dnodeint(h, n);
		return (new_n)
	}
	while (current)
	{
		if (current->next == NULL && count == idx - 1)
		{
			new_n = add_dnodeint_end(h, n);
			return (new_n);
		}
		else if ((idx - 1) == count)
		{
			new_n->next = current->next;
			new_n->prev = current;
			current->next->prev = new_n;
			current->next = new_n;
			return(new_n)
		}
		count++;
		current = current->next;
	}
	free(new_n);
	return (NULL);
}
