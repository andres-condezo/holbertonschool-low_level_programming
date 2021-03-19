#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: pointer to a list_t.
 *
 * Return: size_t.
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t nodes = 0;

	if (temp == NULL)
	{
		return (0);
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
