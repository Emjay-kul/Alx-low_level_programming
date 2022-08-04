#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - gets the length of the input string
 *
 * @str: string input
 *
 * Return: number of indexes in a string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}

/**
 * _strcpy - copies a string from src to dest
 *
 * @dest: string to be copied to
 *
 * @src: string to be copied from
 *
 * Return: pointer to start of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - program that creates a new dog, create a new struct
 *
 * @name: stores the name char array
 *
 * @age: stores the age float
 *
 * @owner: stores the owner char array
 *
 * Return: pointer to the newly created struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = NULL;
	char *newName, *newOwner;
	int newNameLen, newOwnerLen;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newNameLen = _strlen(name);
	newName = malloc(sizeof(char *) * (newNameLen + 1));

	if (newName == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newOwnerLen = _strlen(owner);
	newOwner = malloc(sizeof(char *) * (newOwnerLen + 1));

	if (newOwner == NULL)
	{
		free(newName);
		free(newDog);
		return (NULL);
	}

	newDog->name = _strcpy(newName, name);
	newDog->age = age;
	newDog->owner = _strcpy(newOwner, owner);

	return (newDog);
}
