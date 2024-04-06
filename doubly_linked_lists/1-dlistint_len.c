#include "lists.h"
/**
 * dlistint_len - returns number of elem
 * @h: head
 * Description: head
 * Return: number of elem
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->n)
			i++;
		else
			return (i);
		h = h->next;
	}
	return (i);
}
