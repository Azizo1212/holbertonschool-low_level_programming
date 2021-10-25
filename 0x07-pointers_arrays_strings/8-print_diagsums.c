#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int aux, sum1 = 0, sum2 = 0;

	for (aux = 0; aux < size; aux++)
	{
		sum1 += a[aux];
		a += size;
	}

	a -= size;

	for (aux = 0; aux < size; aux++)
	{
		sum2 += a[aux];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
