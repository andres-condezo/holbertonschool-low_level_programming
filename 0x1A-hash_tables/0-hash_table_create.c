#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table.
 * @size: is the size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(*hash_table));
	hash_table->array = malloc(sizeof(*(hash_table->array)) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		(hash_table->array)[i] = NULL;
	}

	return (hash_table);
}
