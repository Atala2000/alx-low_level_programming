#include "lists.h"

/**
 *reverse_listint - linked list is reversed
 *@head: points to 1st node in list
 *Return: 1st node pointer
 *
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
