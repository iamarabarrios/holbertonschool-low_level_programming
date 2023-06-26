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
	int i = 0;
	int m;

	while (dest[i] != '\0')
		i++;

	for (m = 0; src[m] != '\0'; m++, i++)
	{
		dest[i] = src[m];
	}
	dest[i] = '\0';

	return (dest);
}
