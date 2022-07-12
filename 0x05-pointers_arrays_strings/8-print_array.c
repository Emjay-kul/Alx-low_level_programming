#include "main.h"
#include <stdio.h>
/**
 * print_array - print n values of an array
 *
 * @a: array of integers
 *
 * @n: number of values to be printed
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
	}

	printf(", ");
}

