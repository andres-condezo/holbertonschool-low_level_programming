#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return:value associated with the element,NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;
	unsigned long int hash;

	if (ht == NULL || ht->array == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	hash = hash_djb2((const unsigned char *)key);
	index = hash % ht->size;

	if ((ht->array)[index] == NULL)
	{
		return (NULL);
	}

	for (temp = (ht->array)[index]; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
	}

	return (NULL);
}
