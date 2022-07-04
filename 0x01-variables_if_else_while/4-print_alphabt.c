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

		if ((x == 'E') || (x == 'Q'))
		{
			continue;
		}
		putchar(lower);

	}

	putchar('\n');

	return (0);
}
