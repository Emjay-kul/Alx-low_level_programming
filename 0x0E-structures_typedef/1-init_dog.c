#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initializes a variable of type struct dog
 *
 * @struct: the struct
 *
 * @name: name
 *
 * @age: age
 *
 * @owner: owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
