#include "main.h"
/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int m;
	int n;

	for (m = 0; m < 8; m++)
	{
	for (n = 0; n < 8; n++)
	{
	_putchar (a[m][n]);
	}
_putchar ('\n');
	}
}
