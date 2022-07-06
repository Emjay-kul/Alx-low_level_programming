#include "main.h"
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
	if (n < 0) return (1);
	{
		putchar('-');
	}
	else if (n == 0) return (0);
	{
		putchar('0');
	else if (n > 0) return (1);
	{
		putchar('1');
	}
}
