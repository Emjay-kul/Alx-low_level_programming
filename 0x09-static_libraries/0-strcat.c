#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: final string after concatenation
 */
char *_strcat(char *dest, char *src)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
