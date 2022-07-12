#include <stdio.h>
#include "main.h"
/**
 * _strlen - Print length of string
 *
 * @s: string value
 *
 * Return: length of string s
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s++)
		length++;

	return (length);
}
