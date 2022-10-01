#include "main.h"

/**
 * _islower - function to check for lowercase
 * @c: is the int that will be used for the argument of the function
 * Return: return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
