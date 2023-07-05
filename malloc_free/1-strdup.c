#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - retorna un puntero a un espacio recien asignado
 *@str: char
 *Return: puntero
 */

char *_strdup(char *str)
{
	int size = strlen(str);
	char *p = (char *)malloc(size + 1);
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	if (p == NULL)/**p es el nuevo puntero*/
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = p[i];
	}
	return (p);
}
