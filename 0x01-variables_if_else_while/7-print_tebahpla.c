#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'Z'; letter >= 'A'; letter--)
	{
		int lower = tolower(letter);

		putchar(lower);

	}

	putchar('\n');

	return (0);
}
