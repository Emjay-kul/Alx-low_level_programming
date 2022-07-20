#include "main.h"
/**
 * _strstr - returns a pointer
 *
 * @haystack: string pointer
 *
 * @needle: second string
 *
 * Return: Character
 */
char *_strstr(char *haystrack, char *needle)
{
	int a = 0;
	int b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
