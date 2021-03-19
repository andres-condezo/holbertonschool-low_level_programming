#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: pointer to a list_t.
 *
 * Return: unsigned int.
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	unsigned int elements = 0;

	if (temp == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		elements++;
		temp = temp->next;
	}

	return (elements);
}
