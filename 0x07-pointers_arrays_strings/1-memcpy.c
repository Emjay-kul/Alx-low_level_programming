#include "main.h"
/**
 * _memcpy - copies n bytes from memory src to memory dest
 *
 * @src: memory pointer source
 *
 * @dest: memory destination where we'll paste the n bytes
 *
 * @n: No of bytes of memory to be filled
 *
 * Return: A pointer to memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
