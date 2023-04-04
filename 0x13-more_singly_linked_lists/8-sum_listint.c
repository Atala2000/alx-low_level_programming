#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - data sum
 * @head: Node adress of 1st
 * Return: Integer
 **/

int sum_listint(listint_t *head)
{
	int listnum = 0;

	while (head != NULL)
	{
		listnum += head->n;
		head = head->next;
	}
	return (total);
}
