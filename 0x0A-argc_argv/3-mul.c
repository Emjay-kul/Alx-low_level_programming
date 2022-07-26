#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
