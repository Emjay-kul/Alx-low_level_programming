#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function that checks integers
 *
 * @c: integer value
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
