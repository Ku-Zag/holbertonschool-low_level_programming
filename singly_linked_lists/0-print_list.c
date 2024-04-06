#include "lists.h"
/**
 * print_list - prints list and amount of nodes
 * @h: head
 * Description: head of list
 * Return: amount of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *current = h;

	while (current)
	{
		if (current->str)
			printf("[%u] %s\n", current->len, current->str);
		else if (current->str == NULL)
			printf("[0] (nil)\n");
		current = current->next;
		i++;
	}
	return (i);
}
