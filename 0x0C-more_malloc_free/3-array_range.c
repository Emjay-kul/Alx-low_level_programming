#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array based on min and max values
 * @min: lower end of the array
 * @max: upper end of the array
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int count, i;

	if (min > max)
		return (NULL);

	count = (max - min) + 1;

	ptr = malloc(sizeof(int) * count);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; 1 < count; i++, min++)
		ptr[i] = min;

	return (ptr);
}
