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
	int a = 0;
	int b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
