#include "main.h"
/**
 * wildcmp - compares two strings to determine identicality
 *
 * @s1: string to compare to
 *
 * @s2: string with wild character
 *
 * Return: 1 on success
 *
 * On error, -1 is returned
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
			return (0);
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}

	return (0);
}
