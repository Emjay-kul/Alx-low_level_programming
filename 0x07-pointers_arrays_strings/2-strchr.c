#include "main.h"
/**
 * _strchr - returns a pointer once c is encountered in the string s
 *
 * @s: string pointer
 *
 * @c: character whose occurrence in the string is being verified
 *
 * Return: A pointer to string s
 */
char *_strchr(char *s, char c)
{
	char s;

	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
