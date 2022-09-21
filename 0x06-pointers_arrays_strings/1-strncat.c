#include "main.h"

/**
 * *_strncat - to concatenate two strings
 * @dest: first variable
 * @src: second variable
 * @n: third variable
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, d;
	
	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	
	while (d < n && src[d] != '\0')
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}	
