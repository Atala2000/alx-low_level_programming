#inlcude "lists.h"
/**
 * get_dnodeint_at_index - node
 * @head: point
 * Return: list
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ct = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (index == ct)
		{
			return (head);
		}
		ct++;
		head = head->next;
	}
	return (NULL);
}
