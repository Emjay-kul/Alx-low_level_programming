#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string to stdout
 *
 * @str: character value
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while(*str)
		putchar(*str++);

	putchar('\n');

}
