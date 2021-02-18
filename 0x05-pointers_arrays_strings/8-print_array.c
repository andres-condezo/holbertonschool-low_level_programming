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

	printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
