#include <stdio.h>


/**
 * main - this is a function to print its name
 * @argc: argc input
 * @argv: an array of a command listed
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
