#include "main.h"
/**
 * print_diagsums - suma de dos diagonales
 * @a: punt int
 * @size: int
 * Return: NULL
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int m = 0;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			(i == j) ? diag1 += a[m] : 0;
			(i + j == size - 1) ? diag2 += a[m] : 0;
			m++;
		}
	printf("%i, %i\n", diag1, diag2);
}
