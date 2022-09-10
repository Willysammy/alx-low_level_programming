#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print lowercase char in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 122; alphabet >= 97; alphabet--)/* using the ASCII code*/
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);

}
