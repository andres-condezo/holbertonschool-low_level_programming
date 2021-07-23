#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: s the hash table
 *
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *array;
	hash_table_t *temp;
	hash_table_t *prev;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	array = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		temp = array[i];
		while (temp != NULL)
		{
			prev = temp;
			temp = temp->next;
			prev->next = NULL;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
		free(array);
		free(ht);
	}
}
