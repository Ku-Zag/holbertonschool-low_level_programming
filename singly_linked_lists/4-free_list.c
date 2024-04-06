#include "lists.h"
/**
 * free_list - frees list
 * @head: head
 * Description: head
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
	free(head);
}
