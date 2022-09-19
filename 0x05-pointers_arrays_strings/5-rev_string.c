#include "main.h"

/**
 * rev_string - reverse a string
 * @s: variable
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int count = 0;
	int end;

	while (s[count] != '\0')
	{
		count++;
	}
	for (end = count - 1; end >= 0; end--)
	{
		_putchar(s[end]);
	}
	_putchar('\n');
}
