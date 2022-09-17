#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * flip_bits - gives the no of bits to flip to get one number from another
 * @n: binary number 1
 * @m: binary number 2
 * Return: number of flip in input numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0, comp, comp1;

	while (!(n == 0 && m == 0))
	{
		comp = n & 1;
		comp1 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (comp != comp1)
			flip += 1;
	}
	return (flip);
}
