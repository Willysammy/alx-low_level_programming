#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of characters
 * @size: size of array
 * @c: character
 *
 * Return: char else NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
