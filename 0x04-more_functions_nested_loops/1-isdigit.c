#include "main.h"

/**
 * _isdigit - check for digits
 * to see if true or false
 * @c: variable to declare
 * Return: Always 0 or 1
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
