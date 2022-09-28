#include "main.h"

/**
 * factorial - function to print the factorial of an integer
 * @n: number to print
 *
 * Return: 0 else -1 if error occurs
 */
int factorial(int n)
{
	/* base case */
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
