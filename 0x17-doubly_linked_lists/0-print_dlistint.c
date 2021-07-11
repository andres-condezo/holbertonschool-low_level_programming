#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;
	const dlistint_t *tmp = h;

	while (tmp)
	{
		printf("%d\n",tmp->n);
		tmp = tmp->next;
		nodes += 1;
	}

	return (nodes);
}
