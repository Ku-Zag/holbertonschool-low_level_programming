#include "lists.h"
/**
 * sum_dlistint - entru
 * @head: head
 * Description: head
 * Return: sum of n in nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
