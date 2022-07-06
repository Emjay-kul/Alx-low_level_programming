#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - function that checks if a 
 * character is lowercase
 *
 *int c - parameter for function is_lower
 *
 * Return: 1 if true, 0 if false
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
