#include "main.h"

/**
 * reset_to_98 - to reset pointer to 98
 *
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int c;

	c = 402;
	n = &c;
	_putchar(n);
	*n = 98;
	_putchar(n);
}
