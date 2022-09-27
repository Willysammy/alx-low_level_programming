#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonal of an array
 * @a: pointer variable
 * @size: size of array
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size - i - 1);
		i++;
	}
	printf("%i, %i\n", sum1, sum2);
}
