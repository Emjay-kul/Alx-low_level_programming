nclude "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * int _is lower - checks if a character is lowercase
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
