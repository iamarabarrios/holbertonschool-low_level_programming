#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatena dos cadenas
 * @dest: char
 * @src: char
 *
 * Return: dest
 *
 */
char *_strcat(char *dest, char *src)
{
int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
