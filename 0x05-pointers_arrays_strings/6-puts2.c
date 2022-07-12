#include <stdio.h>
#include "main.h"
/**
 * _puts2 - prints a string to stdout
 *
 * @str: character value
 *
 * Return: Always 0
 */
void _puts2(char *str)
{
	int len = 0;
	int index = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		putchar(str[index]);

	putchar('\n');

}
