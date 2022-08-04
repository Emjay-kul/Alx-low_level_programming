#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees memory created in previous task
 *
 * @d: input struct
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
