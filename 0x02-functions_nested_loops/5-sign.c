#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_sign -nfunction that prints the sign of a given number
 *
 * @n: given parameter
 *
 * Return: 0 if given number is 0 and 1 if given number is positive or negative
 */

int print_sign(int n)
{
	if (n < 0)
	{
		putchar('-');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		putchar('1');
		return (0);
	}
}
