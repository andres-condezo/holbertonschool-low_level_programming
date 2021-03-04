#include <stdio.h>
#include "holberton.h"

/**
 * main - Printsall arguments it receives.
 * @argc: contains the number of arguments passed to the program..
 * @argv: a one-dimensional array of strings.
 *
 * Return: 0 Success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
