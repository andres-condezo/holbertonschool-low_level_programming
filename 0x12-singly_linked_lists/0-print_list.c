#include "lists.h"

/**
 * sum_them_all - Prints a sum.
 * @n: number of parameters.
 *
 * Return: sum.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
	{
		return (-1);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nodes++;
		h = h->next;
	}

	return (nodes);
}
