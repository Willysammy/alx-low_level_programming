#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: first variable
 * @src: second variable
 * @n: third variable
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
