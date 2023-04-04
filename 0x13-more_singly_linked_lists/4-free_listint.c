#include "lists.h"
#include <stdlib.h>

/**
 *free_listint - List free
 *@head: 1st node adress
 **/

void free_listint(listint_t *head)
{
	listint_t *pt, *pt2;

	pt = head;
	while (pt != NULL)
	{
		pt2 = pt->next;
		free(pt);
		pt = pt2;
	}
}
