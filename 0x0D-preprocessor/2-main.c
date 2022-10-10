#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the current filename
 * _FILE_: predefined macro
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
