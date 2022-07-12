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

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
