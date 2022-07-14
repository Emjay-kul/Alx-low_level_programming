#include "main.h"
/**
 * cap_string - changes lowercase letters to uppercase
 *
 * @s: string to change
 *
 * Return: Address of s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while(*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
