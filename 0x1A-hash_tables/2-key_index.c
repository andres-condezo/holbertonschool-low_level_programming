#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: is the key
 * @size: is the size of the array
 *
 * Return: The index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}
