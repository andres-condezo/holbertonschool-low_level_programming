#include "holberton.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: a pointer to an int
 * @b: a pointer to an int
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
