#include "main.h"

/**
 * print_sign - function to print sign of a number
 * @n: is the value to use
 * Return: return 1 otherwise 0 and otherwise -1
 */
int print_sign(int n)
{
	n = 0;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
