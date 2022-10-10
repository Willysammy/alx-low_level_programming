#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function to print struct dog
 * @d: pointer to struct
 *
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);

		if (d->owner)
		{
			printf("owner: %s\n", d->owner);
		}
		else
		{
			printf("owner: (nil)\n");
		}
	}
}
