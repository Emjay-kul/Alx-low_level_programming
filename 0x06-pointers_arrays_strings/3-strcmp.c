#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: Int
 */
char _strcmp(char *s1, char *s2)
{
	int i = 0;
	int aux;

	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
		{
			aux = (*(s1 + i) - *(s2 + i));
			return (aux);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			aux = (*(s1 + i) - *(s2 + i));
			return (aux);
		}
		i += 1;

	}
	return (0);
}
