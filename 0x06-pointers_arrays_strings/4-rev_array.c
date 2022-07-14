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
	int i = 0;
	int aux;
	
	
	n = n - 1;

	while (i <= n)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n--] = aux;
	}
}
