#include "main.h"

/**
 * _isalpha - function to check for alphabets
 * @c: is to be used
 * Return: return 1 otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
