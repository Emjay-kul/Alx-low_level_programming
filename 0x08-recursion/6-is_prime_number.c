#include "main.h"
/**
 * prime2 - makes possible to evaluate from 1 to n
 *
 * @a: same number as n
 *
 * @b: number that iterates from 1 to n
 *
 * Return: 1 on success
 *
 * On error, -1 is returned to denote error
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);

	return (prime2(a, b + 1));
}
/**
 * is_prime_number - determines print number
 *
 * @n: number to be evaluated
 *
 * Return: 1 if n is prime
 */
int 1s_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime2(n, 2));
}
