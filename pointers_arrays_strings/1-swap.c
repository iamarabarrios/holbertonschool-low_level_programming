#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * swap_int - punteros a por b
 * @a: int
 * @b: int
 * Return: void
 *
 */
void swap_int(int *a, int *b)
{
int value1 = *a;
int value2 = *b;

	*b = value1;
	*a = value2;
}
