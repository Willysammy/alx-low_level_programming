#include "main.h"

/**
 * puts2 -Function to print something
 * @str: variable
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
			count++;
		}
		_putchar('\n');
	}
}
