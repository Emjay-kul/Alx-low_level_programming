#include "main.h"
/**
 * rot13 - encodes a string using r0t13 encryption
 *
 * @s: pointer given by main
 *
 * Return: returns pointer s
 */
char *rot13(char *s)
{
	int i = 0;
	int j;
	int begin[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int end[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'l', 'm', 'N',
'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C',
'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	while (s[i] != 0)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == begin[j])
			{
				s[i] = end[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
