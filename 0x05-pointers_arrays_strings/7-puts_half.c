#include "main.h"

/**
 * puts_half -Function to half of a string
 * @str: variable
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int count, half;

	if (str < 0)
	{
		half = -1 * (count % 10);
		_putchar(half + '0');
		return (half);
	}
	else
	{
		half = count % 10;
		_putchar(half + '0');
		return (half);
	}
}
