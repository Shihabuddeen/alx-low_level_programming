#include "stdio.h"

/**
 * main - prints alphabets in reverse order
 * Return: Always 0
 */
int main(void)
{
	char u;

	for (u = 'z'; u >= 'a'; u--)
		putchar(u);

	putchar('\n');

	return (0);
}

