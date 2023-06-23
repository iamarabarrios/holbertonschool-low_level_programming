#include "main.h"
#include <stdio.h>
/**
 * print_array - imprime array
 * @a: int
 * @n: int
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 0)
	{
		printf("\n");
		printf("\n");
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		printf(", ");
		if (i == n - 1)
		printf("\n");
	}
}
