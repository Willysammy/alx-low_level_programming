#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print hexadecimal nums in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower_case;

	for (lower_case = 48; lower_case <= 57; lower_case++)
	{
		putchar(lower_case);
	}
	for (lower_case = 97; lower_case <= 102; lower_case++)
	{
		putchar(lower_case);
	}
	putchar('\n');

	return (0);

}
