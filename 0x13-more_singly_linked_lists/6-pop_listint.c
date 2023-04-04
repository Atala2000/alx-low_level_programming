#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - First element delete
 *@head: List pointer
 *Return: Success
 **/

int pop_listint(listint_t **head)
{
	listint_t *pt;
	int datal;

	if (*head == NULL)
		return (0);

	pt = *head;
	*head = pt->next;
	datal = pt->n;
	free(pt);
	return (datal);
}
