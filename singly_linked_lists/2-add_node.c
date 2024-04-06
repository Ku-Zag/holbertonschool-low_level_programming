#include "lists.h"
/**
 * add_node - entry
 * @head: head of list
 * @str: string of node
 * Description: heads nodes
 * Return: address of new_node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int i = 0;

	while (str[i])
		i++;
	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
