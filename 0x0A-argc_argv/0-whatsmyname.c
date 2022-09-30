#include "main.h"

/**
 * main - print to return integer
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		char *c = argv[i];

		_putchar(*c);
	}
	_putchar('\n');
	return (0);
}
