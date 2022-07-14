#include "main.h"
/**
 * reverse_array - reverses array elements
 *
 * @a: int array
 *
 * @n: no of elements in a
 *
 * Return: Always 0
 */
void reverse_array(int *a,int n)
{
	int i, end, aux;

	i = 0;
	end = n - 1;

	for (i = 0; i < n; i++)
		;
	for (i = 0; i < (n / 2); i++)
	{
		aux = a[i];
		a[i] = a[end];
		a[end] = aux;
		end--;
	}

	for (i = 0; i < n; i++)
		;
}
