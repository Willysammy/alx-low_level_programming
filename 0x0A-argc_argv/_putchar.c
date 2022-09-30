#include "main.h"

/**
 * _putchar - function to print to stdout
 * @c: character to print
 *
 * Return: On success 0, else -1. errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
