#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print numbers with putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);

}
