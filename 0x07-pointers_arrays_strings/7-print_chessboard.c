#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: 2D array
 */
void print_chessboard(char (*a)[8])
{
	int k;
	int m;

	for (k = 0; k < 8; k++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[k][m]);
		}
		_putchar('\n');
	}
}
