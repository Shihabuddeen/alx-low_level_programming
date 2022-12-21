#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
<<<<<<< HEAD

	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
		printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
		printf(" Buzz");
		}
=======
	for (n = 2; n <= 100; n++)
	{
	if ((n % 3 == 0) && (n % 5 == 0))
	{
	printf(" FizzBuzz");
	}
	else if (n % 3 == 0)
	{
	printf(" Fizz");
	}
	else if (n % 5 == 0)
	{
	printf(" Buzz");
	}
	else
	{
	printf(" %d", n);
>>>>>>> ca57722d45527463ed23c8220de594260c4194c7
	}
}
printf("\n");

return (0);
}


