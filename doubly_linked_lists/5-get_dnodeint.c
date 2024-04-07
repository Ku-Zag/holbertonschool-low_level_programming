#include "lists.h"
#include <limits.h>
/**
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int max = UINT_MAX;

	if (index >= max)
		return (NULL);
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
