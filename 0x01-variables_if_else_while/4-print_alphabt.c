#include <stdio.h>

/**
 * main - Prints prints the alphabet in lowercase and uppercase without q or e.
 *
 * Return: 0 (Success)
 */
int main(void)
{

char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch == 'q' || ch == 'e')
	{
		ch++;
	}
	else
	{
		putchar(ch);
	}
}
	putchar('\n');
	return (0);
}
