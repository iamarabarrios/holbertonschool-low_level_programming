#include "main.h"
#include <stdio.h>
/**
 * _strcpy - longitud
 * @dest: char
 * @src: char
 *
 * Return: void
 *
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
