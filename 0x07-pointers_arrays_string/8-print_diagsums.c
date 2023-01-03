#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - main entry point
 * Description: prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: 2d array of chars
 * @size: number matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int add1, add2;

	add1 = 0;
	add2 = 0;

	i = 0;
	while (i < size)
	{
		add1 = add1 + *(a + i * size + i);
		add2 = add2 + *(a + i * size + size - i - 1);

		i++;
	}
	printf("%i, %i\n", add1, add2);
}

