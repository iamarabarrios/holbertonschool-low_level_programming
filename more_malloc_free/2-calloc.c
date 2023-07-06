#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_calloc - asigna memoria para un array
 * @nmemb: int
 * @size: int
 * Return: puntero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		str[count] = 0;
		count++;
	}
	return (str);
}
