#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Prints a 2D array
 * @height: column of array
 * @width: row of array
 *
 *Return: a pointer to an array
 */
int **alloc_grid(int width, int height)
{
	int **strout;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	strout = malloc(height * sizeof(int *));
	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		strout[i] = malloc(width * sizeof(int));
		if (strout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(strout[i]);
			free(strout);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			strout[i][j] = 0;
	return (strout);
}
