
#include "holberton.h"
/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: An array of integers.
 * @n: the number of elements to swap
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int index = 0;
	int temp;

	n = n -1;

	while (index <= n)
	{
		temp = a[index];
		a[index] = a[n];
		a[n] = temp;

		n--;
		index++;
	}
}
