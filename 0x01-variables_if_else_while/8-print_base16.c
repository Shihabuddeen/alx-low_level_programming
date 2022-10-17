#include <stdio.h>

/**
 * main - prints numbers in base 16
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int x;
	char la;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}

