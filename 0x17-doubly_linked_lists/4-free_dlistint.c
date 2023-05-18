#include "lists.h"
/**
 * free_dlistint - list is freed
 * @head: head
 * Return: Nothing
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
