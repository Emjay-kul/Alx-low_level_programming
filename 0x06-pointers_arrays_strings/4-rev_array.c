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
	int j = 0;
	int aux = 0;
	int *init, *final;

	init = a;
	final = a;
	n -= 1;

	while (i < n)
		i += 1;

	while (j <= 1)
	{
		aux = *(init + j);
		*(init + j) = *(final + i);
		*(final + i) = aux;
		j++;
		i--;
	}
}
