#include "function_pointers.h"
/**
 * int_index - Search for an integer.
 * @array: Array to be scanned.
 * @size: Size of the array.
 * @cmp: Pointer to the function you need to use.
 *
 * Return: Void.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			for (i = 0; i < size; i++)
		}
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
