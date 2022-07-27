#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int change(int cents);
/**
 * main - program that prints all arguments passed to it
 *
 * @argc: count of command line arguments
 *
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2 )
	{
		printf("%s\n", "Error");
		return (1);
	}

	printf("%d\n", change(atoi(argv[1])));
	return (0);

}

/**
 * change - get change
 *
 * @cents: amount of coins from main function
 *
 * Return: change
 */
int change(int cents)
{
	int q = 25, d = 10, n = 5, t = 2, p = 1;
	int coins;

	while (cents > 0)
	{
		while (cents >= q)
		{
			cents -= q;
			coins++;
		}
		while (cents >= d)
		{
			cents -= d;
			coins++;
		}
		while (cents >= n)
		{
			cents -= n;
			coins++;
		}
		while (cents >= t)
		{
			cents -= t;
			coins++;
		}
		while (cents >= p)
		{
			cents -= p;
			coins++;
		}
	}
	return (coins);
}
