#include "main.h"

/**
 * _abs - Function to compute the absolute value of an integer
 * @r: variable to use
 * Return: Return 0
 */
int _abs(int r)
{
	if (r > 0 || r == 0)
	{
		return (r);
	}
	else
		return (r * -1);
}
