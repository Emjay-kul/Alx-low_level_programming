#include "main.h"
/**
 * print_chessboard - prints the chessboard
 *
 * @a: array of pieces
 */
void print_chessboard(char (*a)[8])
{
	int c;
	int b;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}

		_putchar('\n');
	}
}
