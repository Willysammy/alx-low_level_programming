#include <stdio.h>
#include "main.h"

/**
 * main - Fibonacci
 * Return: Success
 */
int main(void)
{
	unsigned long int i, j, k, j1, j2, j3, j4;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	j1 = j / 1000000000;
	j2 = j % 1000000000;
	j3 = k / 1000000000;
	j4 = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", j3 + (j4 / 1000000000));
		printf("%lu", j4 % 1000000000);
		j3 = j3 + j1;
		j1 = j3 - j1;
		j4 = j4 + j2;
		j2 = j4 - j2;
	}

	printf("\n");

	return (0);
}
