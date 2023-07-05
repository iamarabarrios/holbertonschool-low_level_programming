#include "main.h"
#include <stdlib.h>

/**
 *create_array - retorna un puntero
 *@size: int
 *@c: char
 *Return: puntero
 */

char *create_array(unsigned int size, char c)

{
	unsigned int x = 0;

	char *str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		str[x] = c;
	}
	return (str);
}
