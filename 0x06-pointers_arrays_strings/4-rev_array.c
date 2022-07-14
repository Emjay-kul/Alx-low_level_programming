#include "main.h"
/**
 * reverse_array - reverses array elements
 *
 * @a: int pointer
 *
 * @n: int
 *
 * Return: Always 0
 */
void reverse_array(int *a,int n)
{
	int i;
	int aux[n];
	
	
	n = n - 1;

	for (i = 0; i <= n; i++)
	{
		aux[n - i] = a[i];
	}
	for (i = 0; i <= n; i++)
		a[i] = aux[i];
}
