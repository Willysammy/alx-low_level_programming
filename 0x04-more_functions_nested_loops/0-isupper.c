#include "main.h"

/** _isupper - Function to check for uppercase
 * @c: variable
 * Return: returns 0
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
