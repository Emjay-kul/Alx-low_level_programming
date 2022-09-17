#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary value to int
 * @b: points to a string of 0s and 1s
 * Return: the converted number of 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		value = value << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			value = value | 1;
		b++;
	}
	return (value);
}
