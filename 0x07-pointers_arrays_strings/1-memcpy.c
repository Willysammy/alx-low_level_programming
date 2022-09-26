#include "main.h"

/**
 * *_memcpy - copy memory area
 * @dest: first pointer variable
 * @src: second pointer variable
 * @n: third integer variable
 *
 * Return: Returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* WHILE loop start*/
	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	} /* End WHILE loop*/
	return (dest);
}
