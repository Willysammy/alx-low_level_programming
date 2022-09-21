#include "main.h"

/**
 * _strcmp -Compare two strings
 * @s1: first variable
 * @s2: second variable
 * Return: return 0 otherwise return -1
 */
int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	while (*str_one == *str_two)
	{
		if (*str_one == '\0' || *str_two == '\0')
		{
			break;
		}
		str_one++;
		str_two++;
	}
	
	if (*str_one == '\0' && *str_two == '\0')
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
