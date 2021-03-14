#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: Char to initializes.
 *
 * Return: pointer to the array or null if malloc fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		array[i] = c;
	}

	return (array);
}
