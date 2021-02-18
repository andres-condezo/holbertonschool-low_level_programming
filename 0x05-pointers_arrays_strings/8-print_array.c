#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers.
 * @a: a pointer to an array
 * @n: n elements to print.
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		printf(", ");
	}
	printf("\n");
}
