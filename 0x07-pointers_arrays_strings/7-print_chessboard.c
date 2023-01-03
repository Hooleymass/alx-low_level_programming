#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - main entry point
 * Description: a function that prints the chessboard
 * @a: The chessboard to be printed
 */

void print_chessboard(char (*a)[8])
{
	int player1, player2;

	for (player1 = 0; a[player1][7]; player1++)
	{
		for (player2 = 0; player2 < 8; player2++)
			putchar(a[player1][player2]);
		putchar('\n');
	}
}

