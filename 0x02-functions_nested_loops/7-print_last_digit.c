#include "main.h"

/**
 * print_last_digit - function to print the last digit
 * @r: variable to use
 * Return: Return value of the last digit
 */
int print_last_digit(int r)
{
	int last_digit = r % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
