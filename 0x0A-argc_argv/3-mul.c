#include <stdlib.h>
#include <stdio.h>

/**
 * main - function main
 * @argc: argument count
 * @argv: argument vector
 * Return: Return 0 on success else 1
 */
int main(int argc, char *argv[])
{
	int s;
	int j;

	if (argc == 3)
	{
		s = atoi(argv[1]);
		j = atoi(argv[2]);

		printf("%i\n", s *j);

		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
