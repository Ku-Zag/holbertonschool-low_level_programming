#include "lists.h"
/**
 * list_len - enrtr
 * @h: head
 * Description: head
 * Return: number of elemnts
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (h->str)
			i++;
		else
			return (i);
		h = h->next;
	}
	return (i);
}
