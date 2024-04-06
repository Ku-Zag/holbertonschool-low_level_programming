#include "lists.h"
/**
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *current = h;

	while (current)
	{
		if (current->str)
			printf("%s", str);
		else
			printf("(nil)");
		current = current->next;
		i++;
	}
	return (i);
}
