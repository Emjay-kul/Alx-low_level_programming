#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * get_bit - gives the value of a bit
 * at a given index
 * @n: bit value in the index
 * @index: index of bit starting from 0
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
