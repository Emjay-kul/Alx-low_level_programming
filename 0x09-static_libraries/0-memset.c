#include "main.h"
/**
 * _memset - fills upn bytes in memory with constant byte b
 *
 * @s: memory pointer
 *
 * @b: constant byte used to fill memory space of s
 *
 * @n: No of bytes of memory to be filled
 *
 * Return: A pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
