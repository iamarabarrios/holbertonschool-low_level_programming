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
char *p;
	int i;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(char) * (strlen(str) + 1));

	if (p == NULL)
		return (NULL);

for (i = 0; str[i] != '\0'; i++)
{
	p[i] = str[i];
}
return (p);
}
