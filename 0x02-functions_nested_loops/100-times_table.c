#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Function to print the mutiplication table
 * @n: Variable to declare
 * Return: Always void
 */
void print_times_table(int n)
{
	int a = 0, r, b;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			r = a * b;
			if (b == 0)
				_putchar('0' + r);
			else if (r < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + r);
			}
			else if (r < 100)
			{
				_putchar(' ');
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			}
			else
			{
				_putchar('0' + r / 100);
				_putchar('0' + (r - 100) / 10);
				_putchar('0' + r % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
