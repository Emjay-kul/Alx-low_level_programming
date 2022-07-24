#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies a string from src to dest
 *
 * @dest: pointer value
 *
 * @src: pointer value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	if (dest == NULL)
	{
		return (NULL);
	}

	while ((src[index]) != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';


	return (dest);
}
