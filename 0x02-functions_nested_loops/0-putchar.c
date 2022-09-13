#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: Print "_putchar" followed by a new line
 * Return: Always 0 (Success)
 */
int _putchar(char a)
{
	return (a);
}
int main(void)
{
	char result = _putchar("_putchar");

	_putchar(result);

	return (0);
}
