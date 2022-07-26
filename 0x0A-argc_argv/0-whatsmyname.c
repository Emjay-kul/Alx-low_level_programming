#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: Always 0
 */
void main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
}
