#include <lists.h>
/**
 */
list_t *add_node(list_t **head, const char *str)
{
	const char *dup = strdup(str);
	const list_t **new_node = head;
	unsigned int i = 0;
	while (head)
	{
		if (head->dup)
			printf("[%i] %s", new_node->len, new_node->dup);
		else
			return (NULL);
	}
	return (dup);
}
