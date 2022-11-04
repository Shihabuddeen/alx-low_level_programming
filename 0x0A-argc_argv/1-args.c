#include "main.h"
#include "stdio.h"

/**
 * main - the number of arguments passed into it.
 * @argc: argc input
 * @argv: an array of a command listed
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
