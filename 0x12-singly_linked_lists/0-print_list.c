#include "lists.h"

/**
 * sum_them_all - Prints a sum.
 * @n: number of parameters.
 *
 * Return: sum.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t nodes = 0;

	if (temp == NULL)
	{
		return (-1);
	}

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		nodes++;
		temp = temp->next;
	}

	return (nodes);
}
