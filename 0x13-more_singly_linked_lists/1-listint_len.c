#include "lists.h"

/**
*listint_len - Number of elements
*@h: List pointer
*Return: Integer
**/

size_t listint_len(const listint_t *h)
{
	const listint_t *pt;
	unsigned int chr = 0;

	pt = h;
	while (pt)
	{
		chr++;
		pt = pt->next;
	}
	return (chr);
}
