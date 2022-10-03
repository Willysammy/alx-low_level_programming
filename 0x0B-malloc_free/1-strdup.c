#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: A pointer to a char
 *
 * Return: Pointer to a duplicated string else NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *str_rep;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	str_rep = (char *)malloc(sizeof(char) * (i + 1));

	if (str_rep == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		str_rep[j] = str[j];

	return (str_rep);
}
