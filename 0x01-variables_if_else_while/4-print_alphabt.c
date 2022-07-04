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

		if (x == 'e')
		{
			continue;
		}
		else if (x == 'q')
		{
			continue;
		}
		else
			putchar(lower);

	}

	putchar('\n');

	putchar('a');

	return (0);
}
