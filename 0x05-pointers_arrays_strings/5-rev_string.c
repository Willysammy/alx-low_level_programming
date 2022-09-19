#include "main.h"

/**
 * rev_string - reverse a string
 * @s: variable
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int count, size, half;
	char start, end;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	size = count - 1;
	half = size / 2;
	while (half >= 0)
	{
		start = s[size - half];
		end = s[half];
		s[half] = start;
		s[size - half] = end;
		half--;
	}
}
