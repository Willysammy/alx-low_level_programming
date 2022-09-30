#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: On success 0 else 1
 */
int main(int argc, char *argv[])
{
	int i, total, change, aux;
	int coin[] = {25, 10, 5, 2, 1};

	i = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coin[i] != '\0')
	{
		if (total >= coin[i])
		{
			aux = (total / coin[i]);
			change += aux;
			total -= coin[i] * aux;
		}
		i++;
	}
	printf("%i\n", change);
	return (0);
}
