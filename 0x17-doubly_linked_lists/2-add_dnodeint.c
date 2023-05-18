#include "lists.h"
/**
 * add_dnodeint - Adds a node
 * @head: H
 * @n: n
 * Return: Node num
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (*head);
	}
	tmp = *head;
	node->next = tmp;
	tmp->prev = node;
	*head = node;
	return (node);
}
