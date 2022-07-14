#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 *
 * @s: string to change
 *
 * Return: Address of s
 */
char *string_toupper(char *s)
{
	int i, k;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char j;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 'a'; j <= 'z'; j++; k++)
		{
			if (s1[i] = j)
				s1[i] = l[k];
		}
	}
	return (s);
}
