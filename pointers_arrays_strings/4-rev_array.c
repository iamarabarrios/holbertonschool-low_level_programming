#include "main.h"
#include <string.h>
/**
 *reverse_array- imprime al reves
 *@n: string
 *@a: puntero
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	}
}
