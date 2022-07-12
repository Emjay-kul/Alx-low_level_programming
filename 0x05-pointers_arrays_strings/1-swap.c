#include "main.h"
/**
 * swap_int - swaps two parameters
 *
 * @a: First integer
 *
 * @b: Second integer
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
