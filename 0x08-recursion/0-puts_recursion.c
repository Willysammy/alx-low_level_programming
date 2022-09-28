#include "main.h"

/**
 * _puts_recursion - prints a string followef by a new line
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	/* iterate over the string by recursion*/
	if (*s == '\0')/* base case */
	{
		_putchar('\n');/*newline*/
		return;
	}
	else
	{
		_putchar(*s);
		/* call function */
		_puts_recursion(s + 1);
	}
}
