#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the combination of five digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3, digit4;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 9; digit2++)
		{
			for (digit3 = 0; digit3 < 10; digit3++)
			{
				for (digit4 = 1; digit4 < 10; digit4++)
				{

					putchar((digit1 % 10) + '0');
					putchar((digit2 % 10) + '0');
					putchar((digit3 % 10) + '0');
					putchar((digit4 % 10) + '0');
					
				 	if (digit1 == 9 && digit2 == 8)
						continue;
					putchar(',');
					putchar(' ');
				}
				if (digit3 == 9 && digit4 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

putchar('\n');

return (0);

}
