#include "lists.h"
/**
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *del, *cur = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = cur->next;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	while (cur && i < index)
	{
		del = cur;
		cur = cur->next;
		i++;
	}
	if (cur == NULL)
		return (-1);
	del->next = cur->next;
	if (cur->next)
		cur->next->prev = del;
	free(del);
	return (1);	
}
