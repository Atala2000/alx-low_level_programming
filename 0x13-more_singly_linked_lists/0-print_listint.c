#include "lists.h"
#include <stdio.h>

/**
*print_listint - Elements of a list are printed
*@h : List pointer
*Return: Integer
**/

size_t print_listint(const listint_t *h)
{
	const listint_t *pt;
	unsigned int cntr = 0;

	pt = h;
	while (pt)
	{
		printf("%d\n", pt->n);
		cntr++;

		pt = pt->next;
	}

	return (cntr);
}
