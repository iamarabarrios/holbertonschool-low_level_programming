#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - crea una matriz de enteros
 * @min: int
 * @max: int
 * Return: puntero
 */

int *array_range(int min, int max)
{
	int *str;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	str = malloc(sizeof(int) * (max - min + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		str[arr] = min;
		min++;
		arr++;
	}
	return (str);
}
