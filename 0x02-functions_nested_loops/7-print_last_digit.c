#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - code to print absolute value
 *
 * @n:integer value
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
	{
		digit *= -1;
	}
	putchar(digit);
		
	return (digit);
}


