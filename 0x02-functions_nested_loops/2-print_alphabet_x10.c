#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet in lower case
 *  followed by a new line
 */

void print_alphabet_x10(void)
{
	char x;
	int i;
	
	for (i = 1; i <= 10; i++)
	{
		for ((x = 'a'); (x <= 'z'); x++)
		{
			putchar(x);
		}

		putchar('\n');
	}

}
