#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table
 * @size: Size of the newly created hash table
 *
 * Return: Pointer to the newly created hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new_ht;

	if (size == 0)
		return (NULL);

	new_ht = malloc(sizeof(*new_ht));
	if (new_ht == NULL)
		return (NULL);

	new_ht->size = size;
	new_ht->shead = NULL;
	new_ht->stail = NULL;
	new_ht->array = malloc(sizeof(*(new_ht->array)) * size);
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		(new_ht->array)[i] = NULL;

	return (new_ht);
}

/**
 * shash_table_set - Sets a new element in the hash table
 * @ht: Pointer to the hash table
 * @key: Key of the new element
 * @value: Value of the new element
 *
 * Return: 1 on success, 0 on failure
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *curr;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL ||
			key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (curr = ht->array[index]; curr != NULL; curr = curr->next)
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			if (curr->value == NULL)
				return (0);
			return (1);
		}

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->snext = NULL;
	new_node->sprev = NULL;
	new_node->next = (ht->array)[index];
	(ht->array)[index] = new_node;
	return (insert_to_sorted_linked_list(ht, new_node));
}

/**
 * insert_to_sorted_linked_list - Inserts a node to the hashtable linked list
 * @ht: Pointer to hash table
 * @new_node: Node to be inserted
 *
 * Return: 1 on success, 0 otherwise
*/
int insert_to_sorted_linked_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *curr;

	if (ht == NULL)
		return (0);

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		return (1);
	}
	/* Insert at the begining */
	if (strcmp(new_node->key, ht->shead->key) < 0)
		return (insert_node_start(&(ht->shead), new_node));

	/* Run through the list to find insertion position */
	curr = ht->shead;
	while (curr->snext != NULL && strcmp(curr->snext->key, new_node->key) < 0)
		curr = curr->snext;
	/* Insert at the end */
	if (curr->snext == NULL)
		return (insert_node_end(&(ht->stail), new_node));

	/* Insert somewhere between the list */
	curr->snext->sprev = new_node;
	new_node->snext = curr->snext;
	curr->snext = new_node;
	new_node->sprev = curr;
	return (1);
}

/**
 * insert_node_start - Inserts a node at the begining of a sorted linked list
 * @head: Pointer to list's head
 * @node: Node to be inserted
 *
 * Return: 1
*/
int insert_node_start(shash_node_t **head, shash_node_t *node)
{
	(*head)->sprev = node;
	node->snext = *head;
	*head = node;
	(*head)->sprev = NULL;

	return (1);
}

/**
 * insert_node_end - Inserts a node at the end of a sorted linked list
 * @tail: Pointer to list's tail
 * @node: Node to be inserted
 *
 * Return: 1
*/
int insert_node_end(shash_node_t **tail, shash_node_t *node)
{
	(*tail)->snext = node;
	node->sprev = *tail;
	*tail = node;
	(*tail)->snext = NULL;

	return (1);
}

/**
 * shash_table_get - Retrieves an element based on it's key
 * @ht: Pointer to the hash table
 * @key: Key for wich to search
 *
 * Return: Value related to key, or NULL
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *curr;
	unsigned long int index, hash;

	if (ht == NULL || ht->array == NULL || key == NULL || *key == '\0')
		return (NULL);

	hash = hash_djb2((const unsigned char *)key);
	index = hash % ht->size;

	if ((ht->array)[index] == NULL)
		return (NULL);

	for (curr = (ht->array)[index]; curr != NULL; curr = curr->next)
		if (strcmp(curr->key, key) == 0)
			return (curr->value);

	return (NULL);
}

/**
 * shash_table_print - Prints the has in order table
 * @ht: Pointer to the hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	char *sep = "";
	shash_node_t *curr;

	if (ht == NULL)
		return;

	printf("{");
	for (curr = ht->shead; curr != NULL; sep = ", ", curr = curr->snext)
		printf("%s'%s': '%s'", sep, curr->key, curr->value);

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the has in reverse order
 * @ht: Pointer to the hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	char *sep = "";
	shash_node_t *curr;

	if (ht == NULL)
		return;

	printf("{");
	for (curr = ht->stail; curr != NULL; sep = ", ", curr = curr->sprev)
		printf("%s'%s': '%s'", sep, curr->key, curr->value);

	printf("}\n");
}

/**
 * shash_table_delete - Frees the memory used by the hash table
 * @ht: Pointer to the hash table
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t **array, *curr, *prev;

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
