#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - Addition to node list
 *@head : Adress of node 1st
 *@n: Adds new node by integer form
 *Return: New node adress
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t1, *t2;

	t1 = malloc(sizeof(listint_t));
	if (t1 == NULL)
		return (NULL);

	t1->n = n;
	t1->next = NULL;

	if (*head == NULL)
	{
		*head = t1;
		return (t1);
	}

	t2 = *head;
	while (t2->next)
		t2 = t2->next;
	t2->next = t1;
	return (t1);
}
