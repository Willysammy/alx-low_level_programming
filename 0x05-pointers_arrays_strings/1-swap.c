#include "main.h"

/**
 * swap_int - function to swap integers
 * @a: first variable
 * @b: second variable
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	*a = 98;
	*b = 42;

	*a = *b;
	*b = *a;
}
