#include <stdio.h>

/**
 * main - Prints the alphabet in lower case,
 * followed by newline.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
		return (0);
}
