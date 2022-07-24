#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string to stdout
 *
 * @s: character value
 *
 * Return: Always 0
 */
void _puts(char *s)
{
	while (*s)
		putchar(*s++);

	putchar('\n');

}
