#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns the pointer of a memory allocation
 *
 * @str: the string to be copied to the pointer
 * Return: the pointer
 */
char *_strdup(char *str)
{
	int a = 0;
	int len = 0;
	int i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i++])
		len++;

	s = malloc((sizeof(char) * len) + 1);

	if (s == NULL)
		return (NULL);

	while (a < len)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';

	return (s);
}




