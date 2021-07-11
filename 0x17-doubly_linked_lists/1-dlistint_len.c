#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 *
 * @h: A pointer to the list
 *
 * Return: Always EXIT_SUCCESS.
 */

size_t dlistint_len(const dlistint_t *h)
{


	int nodes = 0;
	const dlistint_t *tmp = h;

	while (tmp)
	{
		tmp = tmp->next;
		nodes += 1;
	}

	return (nodes);
}
