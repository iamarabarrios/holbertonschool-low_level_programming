#include "main.h"
#include <stdlib.h>

/**
 *create_array - the function
 *@size: the size of the string
 *@c: the char
 *Return: the pointer
 */

char *create_array(unsigned int size, char c)

{
	unsigned int x = 0;

	char *str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		str[x] = c;
	}
	return (str);
}
