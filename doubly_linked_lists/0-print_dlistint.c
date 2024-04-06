#include "lists.h"
/**
 * print_dlistint - entry
 * @h: head
 * Description: head
 * Return: number of elem
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
