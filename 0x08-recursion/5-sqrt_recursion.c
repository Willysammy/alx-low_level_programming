#include "main.h"

/**
 * _find - evaluate square function
 * @n: first integer variable
 * @i: second integer variable
 *
 * Return: 0 else -1
 */
int _find(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_find(i + 1, n));
	else if (i * i == n)
		return (i);
	return (-1);
}

/**
 * _sqrt_recursion - function to find square root of natural integers
 * @n: interger to print
 *
 * Return: _sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else
		return (_find(i, n));
}
