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

	count = 0;
	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
			count++;
		}
		if (count % 2 == 1)
		{
			half = count / 2;
		}
		else
		{
			half = (count - 1) / 2;
		}

		for (half++; half < count; half++)
		{
			_putchar(str[half]);
		}
		_putchar('\n');
	}
}
