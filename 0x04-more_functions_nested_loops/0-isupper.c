#include "main.h"

/** _isupper - Functio to print is integer is upper or not
 * @c: variable
 * Return: returns 1 otherwise 0
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
