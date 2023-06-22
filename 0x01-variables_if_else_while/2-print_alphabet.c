#include <stdio.h>

/*
 * main - Print the alphabetic
 * Return: Always 0
 */

int main(void)
{
	char x;

	for (x = "A"; x <= 'Z'; x++)
		x = tolower(x);
		putchar(x);
		putchar("\n");
		return (0);
}
