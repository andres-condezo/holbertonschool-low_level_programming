#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: is the hash table
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t **array;
	hash_node_t *temp;
	char *c = "";

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	array = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		for (temp = array[i]; temp != NULL; c = ", ", temp = temp->next)
		{
			printf("%s'%s': '%s'", c, temp->key, temp->value);
		}
	}
	printf("}\n");

}
