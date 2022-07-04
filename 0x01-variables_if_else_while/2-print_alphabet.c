#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
		putchar('\n');
	}

	return (0);
}
