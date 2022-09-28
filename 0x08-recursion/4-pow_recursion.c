#include "main.h"

/**
 * _pow_recursion - function to raise a number to the power of the other
 * @x: base integer
 * @y: power
 *
 * Return: -1 on error, else 0
 */
int _pow_recursion(int x, int y)
{
	/*base case*/
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
