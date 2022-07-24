#include "main.h"
/**
 * _strpbrk - returns a pointer
 *
 * @s: string pointer
 *
 * @accept: second string
 *
 * Return: Character
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, stop;
	char *tmp;

	for (i = 0; *(s + i + 1); i++)
	{
		stop = 0;
		for (j = 0; *(accept + j + 1); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				tmp = s + i;
				stop = 1;
				break;
			}
			tmp = 0;
		}
		if (stop == 1)
			break;
	}
	return (tmp);
}
