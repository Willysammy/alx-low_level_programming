#include "main.h"

/**
 * _isdigit - Function to checks for digits
 * @c: variable
 * Return: Return 0 or 1
 */
int _isdigit(int c)
{
	if (c == 48 || c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
