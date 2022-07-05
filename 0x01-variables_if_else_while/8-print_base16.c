#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	for (letter = 'A'; letter <= 'F'; letter++)
	{
		int lower = tolower(letter);

		putchar(lower);
	}

	putchar('\n');

	return (0);
}


