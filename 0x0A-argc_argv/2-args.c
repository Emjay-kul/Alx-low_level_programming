#include "main.h"
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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
