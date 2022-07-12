#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * 
 * @str: character value
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int len = 0;
	int index = 0;

	while (str[index++])
		len++;

	for (index = len / 2; index <= len - 1; index ++)
		if (len % 2 != 0)
			for (index = (len - 1) / 2; index <= len - 1; index++)
				putchar(str[index]);
		else
		putchar(str[index]);

	putchar('\n');

}
