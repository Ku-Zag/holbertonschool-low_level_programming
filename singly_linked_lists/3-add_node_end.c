#include "lists"
/**
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	unsigned int i;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
		return (NULL);
	while (str[i])
		i++;
	end_node->len = i;
	end_node->str = strdup(str);
	end_node->next = NULL;
	*tail = end_node;
	return (end_node);
}
