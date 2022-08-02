#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: pointer to the joined string s
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int l;
	int len = 0;
	int lens = 0;
	int a = 0;
	int b = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i++])
		len++;
	while (s2[j++])
		lens++;
	l = len + lens;

	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	while (a < len)
	{
		s[a] = s1[a];
		a++;
	}
	while (b < lens)
	{
		s[a + b] = s2[b];
		b++;
	}
	s[a + b] = '\0';
	return (s);
}
