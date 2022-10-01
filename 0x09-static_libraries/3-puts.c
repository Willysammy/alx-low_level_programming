#include "main.h"

/**
 * _puts - function to print strings to stdout
 * @str: variable
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
