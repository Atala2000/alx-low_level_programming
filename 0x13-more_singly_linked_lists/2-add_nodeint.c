#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint - Addsa node at list beginning
 *@head: Node 1st adress
 *@n: Integer
 *Return: Adress of node
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pt;

	pt = malloc(sizeof(listint_t));
	if (pt == NULL)
		return (NULL);

	pt->n = n;
	pt->next = *head;
	*head = pt;
	return (*head);
}
