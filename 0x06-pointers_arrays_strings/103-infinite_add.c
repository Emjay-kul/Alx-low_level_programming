#include "main.h"
/**
 * infinite_add - adds two numbers
 *
 * @n1: char pointer for number
 *
 * @n2: char pointer for number
 *
 * @r: buffer
 *
 * @size_r: buffer size
 *
 * Return: result to char
 *
 * A: count length of n1 and n2
 *
 * C: decrement by 1
 *
 * D: less than i or j
 *
 * E: sum
 *
 * F: add index
 *
 * G: negative
 *
 * H: overflow handling
 *
 * J: indicies
 *
 * K: buffer size counter
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int sum = 0;
	int tens = 0;
	int begin = 0;
	int swap = 0;

	while (n1[i] != 0)/* A */
		i++;
	while (n2[j] != 0)
		j++;

	i--;/* C */
	j--;

	if(i > size_r || j > size_r)/* D */
		return (0);
	for ( ; k < size_r; i--, j--, k++)/* E */
	{
		sum = tens;
		if (i >= 0)/* F */
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (i < 0 && j < 0 && sum == 0)/* G */
			break;
		tens = sum / 10;/* H */
		r[k] = sum % 10 + '0';
	}
	if (i >= 0 || j >= 0 || sum > 0)/* J */
		return (0);

	r[k] = '\0';/* K */
	k--;

	for ( ; begin < k; k--, begin++)/* I */
	{
		swap = r[k];
		r[k] = r[begin];
		r[begin] = swap;
	}
	return (r);
}
