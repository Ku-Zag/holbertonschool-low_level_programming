#include "lists.h"
/**
 * add_dnodeint - adds node to start
 * @head: head, @n: integer
 * Description: intger in nodes
 * Return: adress of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
