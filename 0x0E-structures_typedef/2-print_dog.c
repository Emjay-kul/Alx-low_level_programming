#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - printss the struct features
 *
 * @d: the struct
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->name);

		printf("Age: ");
		if (d->age == NULL)
			printf("(nil)\n");
		else
			printf("Age: %f\n", d->age);

		printf("Owner: ");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
