#include "lists.h"

/**
 * _strlen - returns the length of a string.
 * @s: a pointer to a char.
 *
 * Return: The length of char *s.
 */
int _strlen(const char *s)
{

	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a list_t.
 * @str: String to be copied.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{

	if (head == NULL)
	{
		return (NULL);
	}

	list_t *temp = NULL;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp->str);
		return (NULL);
	}
	temp->len = _strlen(str);
	temp->next = *head;

	*head = temp;

	return (*head);
}
