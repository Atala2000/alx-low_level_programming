#include "lists.h"
#include <stdio.h>
/**
 *free_listint_safe - linked list is fre
 *@h: 1st node pointer
 *Return: No. of freed elements
 **/
size_t free_listint_safe(listint_t **h)
{
	size_t x = 0;
	int y;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		y = *h - (*h)->next;
		if (y > 0)
		{
			tmp = (*h)->next;
			*h = tmp;
			x++;
		}
		else
		{
			*h = NULL;
			x++;
			break;
		}
	}

	*h = NULL;

	return (x);
}
