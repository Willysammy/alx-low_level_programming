#include "main.h"
#include <stdio.h>

/**
 * _strlen - To print length of char
 * @s: Variable
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

