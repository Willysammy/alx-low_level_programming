#include "main.h"
#include <time.h>

/**
 * positive_or_negative - Function to print if positive or negative
 * Return: 0
 */

void positive_or_negative(int i)
{
	int i;

	srand(time(0));
	n =rand() - RAND_MAX / 2;
	if ( n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
