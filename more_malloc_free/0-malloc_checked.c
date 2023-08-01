#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - asigna memoria
 * @b: int
 * Return: puntero
 */
void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
}

