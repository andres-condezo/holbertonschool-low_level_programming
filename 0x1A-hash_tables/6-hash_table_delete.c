#include "hash_tables.h"

/**
 * hash_table_delete - Deletes hash table
 * @ht: Pointer to the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t **array, *curr, *prev;

	if (ht == NULL || ht->array == NULL)
		return;

	array = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		curr = array[i];
		while (curr != NULL)
		{
			prev = curr;
			curr = curr->next;
			prev->next = NULL;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
		array[i] = NULL;
	}
	free(array);
	free(ht);
}
