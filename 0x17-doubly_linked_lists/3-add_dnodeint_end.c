#include "lists.h"
/**
 * add_dnodeint_end - Adds new node
 * @head: head
 * @n: n
 * Return: dlist
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list = NULL;
	*end = *head;

	list = malloc(sizeof(dlistint_t));

	if (list == NULL)
	{
		return (NULL);
	}
	list->n = n;
	list->prev = NULL;
	list->next = NULL;
}
