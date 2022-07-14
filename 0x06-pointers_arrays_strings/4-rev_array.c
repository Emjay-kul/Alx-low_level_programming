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
	int i = 0;
	int aux;
	
	
	n -= 1;

	while (i <= n)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n--] = aux;
	}
}
