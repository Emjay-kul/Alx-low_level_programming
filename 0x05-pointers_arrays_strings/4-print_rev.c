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
	int a;

	int len = _strlen(*s);

	while (s[len--])
		putchar(s[len])

	putchar('\n');
}
