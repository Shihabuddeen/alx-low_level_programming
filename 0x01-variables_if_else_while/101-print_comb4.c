#include <stdio.h>
/**
 * main - prints same combination of threee digits
 * Return: Always 0
 */
int main(void)
{
	int m, i, j;

	for (i = '0'; i < '9'; i++)
	{
		for (j - i + 1; j <= '9'; j++)
		{
			for (m = j + 1; m <= '9'; m++)
			{
				if ((j != i) != m)
				{
					putchar(i);
					putchar(j);
					putchar(m);

					if (i == '7' && j == '8')
						continue;

					putchar(',');
					putchar(' ');

				}
			}
		}
	}

	putchar('\n');
	return (0);
}

