#include "lists.h"

/**
 * print_listint_safe - linked list is printed
 * @head: List
 * Return: No. of nodes
 **/

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int f;

	while (head)
	{
		f = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (f > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
