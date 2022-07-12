#include <stdio.h>
#include "main.h"
/**
 * print_rev - print in reverse
 *
 * @s: string value
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(*s);

	for (len >= 0, len--)
		putchar(s[len])

	putchar('\n');
}
