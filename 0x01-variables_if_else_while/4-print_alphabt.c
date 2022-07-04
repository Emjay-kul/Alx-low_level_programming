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
			break;
		}
		else if (x == 'q')
		{
			break;
		}
		else
			putchar(lower);

	}

	putchar('\n');

	return (0);
}
