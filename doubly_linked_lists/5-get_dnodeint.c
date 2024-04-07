#include "lists.h"
#include <limits.h>
/**
 * get_dnodeint_at_index - get nth node
 * 
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int max = UINT_MAX;

	if (index > max)
	{
		printf("(nil)\n");
	}
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
