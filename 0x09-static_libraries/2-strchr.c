#include "main.h"

/**
 * *_strchr - locates a string
 * @s: pointer variable
 * @c: second variable
 *
 * Return: returns pointer else NULL
 */
char *_strchr(char *s, char c)
{
	/* WHILE looo */
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	/* End WHILE loop */
	if (*s == c)
	{
		return (s);
	}


	return (0); /* NULL */
}
