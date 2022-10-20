#include "main.h"

/**
 * largest_number - returns the largest number
 * @x: first integer
 * @y: second integer
 * @z: third integer
 * Returns: largest number
 */

int largest_number(int x, int y, int z)
{
	int largest;

	if (x > y)
	{
		if (y > z)
			largest = x;
		else if (x > z)
			largest = x;
		else
			largest = z;

	}
	else
	{
		if (y < z)
			largest = z;
		else
			largest = y;
	}
	return (largest);
}
