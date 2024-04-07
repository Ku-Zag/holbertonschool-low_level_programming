#include "lists.h"
/**
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	unsigned int l = 0;
	dlistint_t *new;
	dlistint_t *cur = *h;
	dlistint_t *len = *h;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	while (len)
	{
		len = len->next
		l++;
	}
	if (index > l)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (cur && i < idx - 1)
	{
		cur = cur->next;
		i++;
	}
	new->prev = cur;
	new->next = cur->next;

	if (cur->next)
		cur->next->prev = new;
	cur->next = new;
	return (new);
}
