#include "search_algos.h"

/**
 * linear_skip - searches for a value
 * @list: list
 * @value: value
 * Return: index
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *gd;

	if (list == NULL)
		return (NULL);

	gd = list;

	do {
		list = gd;
		gd = gd->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)gd->index, gd->n);
	} while (gd->express && gd->n < value);

	if (gd->express == NULL)
	{
		list = gd;
		while (gd->next)
			gd = gd->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)gd->index);

	while (list != gd->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
