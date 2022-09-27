#include "main.h"

/**
 * *_strstr - check for string in a string
 * @haystack: first pointer variable
 * @needle: second pointer variable
 * Return: Pointer to beginning else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*haystack != '\0' && *needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (needle);
		}
		haystack = needle + 1;
	}
	return (0);
}
