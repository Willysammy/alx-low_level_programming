#include "main.h"

/**
 * *_memset - fills memory with constant bytes
 * @s: first variable
 * @b: second variable
 * @n: third variable
 *
 * Return: Returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* declaring for */
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /* adf 1 position to s*/
	} /*end for loop*/
	return (s);
}

