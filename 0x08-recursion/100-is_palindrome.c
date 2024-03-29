#include "main.h"
/**
 * palind2 - obtains length of a
 *
 * @a: string
 *
 * @l: integer to count length
 *
 * Return: on success 1
 *
 * On error. -1 denotes error
 */
int palind2(char *a, int l)
{
	if (*a == 0)
		return (l - 1);

	return (palind2(a + 1, l + 1));
}
/**
 * palind3 - compares string vs string reverse
 *
 * @a: string
 *
 * @l: length
 *
 * Return: 1 on success
 *
 * On error, -1 is returned
 */
int palind3(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);

	return (palind3(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: given string
 *
 * Return: 1 if success
 */
int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);

	return (palind3(s, l));
}
