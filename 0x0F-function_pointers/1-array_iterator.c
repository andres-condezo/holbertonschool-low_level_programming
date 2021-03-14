#include "function_pointers.h"
/**
 * array_iterator - Prints a name.
 * @array: Array to be iterated.
 * @size: Size of the array.
 * @action: Pointer to the function you need to use.
 *
 * Return: Void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && size && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
