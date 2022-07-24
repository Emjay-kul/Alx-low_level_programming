#include "main.h"
/**
 * _strspn - returns a pointer
 *
 * @s: string pointer
 *
 * @accept: second string
 *
 * Return: An unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, stop;

	for (i = 0; *(s + i + 1); i++)
	{
		stop = 1;
		for (j = 0; *(accept + j + 1); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				stop = 0;
				break;
			}
		}
		if (stop == 1)
			break;
	}
	return (i);
}
