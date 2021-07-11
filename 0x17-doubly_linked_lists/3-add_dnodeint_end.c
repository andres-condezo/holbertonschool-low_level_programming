#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a dlist_t.
 * @n: data to be copied.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (head == NULL)
	{
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->n = n;
	if (*head)
	{
		dlistint_t *tmp = *head;

		tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = new_node;
		new_node->prev = tmp;

	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
