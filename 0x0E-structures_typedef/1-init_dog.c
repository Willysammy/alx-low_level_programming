#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to struct type dog
 * @name: pointer to char name of dog
 * @age: age of the dog
 * @owner: pointer to char owner of the dog
 * Return: No.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
