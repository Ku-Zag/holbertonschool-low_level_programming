#include "lists.h"
/**
 * add_node_end - entry
 * @head: head
 * @str: string
 * Description: adds end node
 * Return: adress of end_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *current = *head;
	unsigned int i = 0;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
		return (NULL);
	while (str[i])
		i++;
	end_node->len = i;
	end_node->str = strdup(str);

	if (*head == NULL)
	{
		end_node->next = *head;
		*head = end_node;
	}
	else
	{
		end_node->next = NULL;
		while (current->next != NULL)
			current = current->next;
		current->next = end_node;
	}
	return (end_node);
}
