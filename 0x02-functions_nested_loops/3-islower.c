#include "main.h"

/**
 * islower - check for lowercase
 *@c: is the int that will be used
 * Return: return 1 otherwise return 0
 */
int islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
