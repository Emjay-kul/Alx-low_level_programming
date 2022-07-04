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

		if ((x == 'e') || (x == 'q'))
		{
			break;
		}

	}

	putchar('\n');

	return (0);
}
