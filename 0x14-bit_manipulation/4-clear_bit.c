#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * clear_bit - clears the value of a given bit to 0
 * @n: binary number
 * @index: index of the bit to change
 * Return: 1 if successful, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n & (~add);
	return (1);
}
