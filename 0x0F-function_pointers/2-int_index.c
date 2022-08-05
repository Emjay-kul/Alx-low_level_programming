#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches the array for  matching values
 *
 * @array: array being passed in
 *
 * @size: number of indexes in the array
 *
 * @cmp: pointer to a function
 *
 * Return: index of the first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*ptr)(int);

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	ptr = cmp;
	for (i = 0; i < size; i++)
	{
		if (ptr(array[i]))
			return (i);
	}

	return (-1);
}





