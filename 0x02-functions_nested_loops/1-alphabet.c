#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet in lower case
 *  followed by a new line
 */

void print_alphabet(void)
{
	char x;

	for ((x = 'a'); (x < 'z'); x++)
	{
		putchar(x);
	}

	putchar('\n');

}
