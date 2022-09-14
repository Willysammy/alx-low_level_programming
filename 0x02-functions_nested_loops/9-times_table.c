#include "main.h"

/**
 * times_table - Function that print the multiplication table
 * @i, r: Variables to declare
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar('\n');
		}
	}
}
