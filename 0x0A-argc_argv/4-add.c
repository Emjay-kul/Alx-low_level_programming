#include "main.h"
#include <string.h>
#include <ctype.h>
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
	int i, j, length, sum;
	int none = 0;
	char *ptr;

	if (argc == 1 )
		printf("%d\n", none);
	else
	{
		sum = 0;

		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
 
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
