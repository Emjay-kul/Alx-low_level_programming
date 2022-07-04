#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		int lower = tolower(x);

		putchar(lower);

	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);

	}

	putchar('\n');

	return (0);
}
