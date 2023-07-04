#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: array name
 * Return: 0;
 */
void print_chessboard(char (*a)[8])
{
	int j, i;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar (a[i][j]);
			putchar (' ');
		}
		putchar ('\n');
	}
}
