#include "main.h"

/**
 * *_strpbrk - searches string in another string
 * @s: first pointer variable
 * @accept: second pointer variable
 * Return: Return s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0);
}
