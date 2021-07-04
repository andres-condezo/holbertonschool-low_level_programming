#include "lists.h"
/**
 * check_cycle - Function in C that checks if a linked list has a cycle in it.
 *
 * @list: linked list to be checked
 *
 * Return: 0 if is a singly linked list
 *	   1 if is a circle linked list
 */

int check_cycle(listint_t *list)
{
	listint_t *fast = list;
	listint_t *slow = list;

	while (fast && fast->next)
	{
		fast = fast->next->next;
		if (fast == slow)
		{
			return (1);
		}
		slow = slow->next;
	}

	return (0);
}
