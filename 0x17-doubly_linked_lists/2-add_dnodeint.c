#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a dlist_t.
 * @n: data to be copied.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
	new_node->n = n;
	if (*head)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
