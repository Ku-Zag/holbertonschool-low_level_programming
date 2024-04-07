#include "lists.h"
/**
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		new->next = NULL;
		new->prev = current;
		current->next = new;
	}
	return (new);
}
