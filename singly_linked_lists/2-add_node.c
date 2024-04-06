#include "lists.h"
/**
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);
	while (str[i])
		i++;
	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = head;
	*head = new_node;
	return (new_node);
}
