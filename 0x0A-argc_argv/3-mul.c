#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Multiplies two numbers.
 * @argc: contains the number of arguments passed to the program..
 * @argv: a one-dimensional array of strings.
 *
 * Return: 0 Success.
 */

int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		int prod;
		int mul1 = atoi(argv[1]);
		int mul2 = atoi(argv[2]);

		prod = mul1 * mul2;

		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
