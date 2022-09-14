#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Function to print the mutiplication tables of digits less than 15
 *
 * @n: Variable to declare
 * Return: Always void
 */
void print_times_tables(int n)
{
	int p;
	int prod;

	for (p = 0; p <= 12; p++)
	{
		printf("0\n");
		for (n = 0; n <= 15; n++)
		{
			printf("%d\n", n);
			prod = p * n;
			printf("%d\n", prod);

			if (n > 15 || n < 0)
			{
				continue;
			}
		}
	}
}
