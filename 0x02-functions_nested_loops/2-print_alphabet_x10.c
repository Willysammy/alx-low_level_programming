#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c ** 10);
	}
	_putchar('\n');
}
