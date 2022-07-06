#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * int _is lower(int c) - checks if a character is lowercase
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
