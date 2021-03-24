#include "lists.h"

/**
 * print_listint - Prints all the elements of a list_t list.
 * @h: pointer to a list_t.
 *
 * Return: nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t nodes = 0;

	if (temp == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		nodes++;
		temp = temp->next;
	}

	return (nodes);
}
