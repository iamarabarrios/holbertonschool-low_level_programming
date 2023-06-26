#include "main.h"
/**
 * _strncat - concatena dos cadenas
 * @dest: char
 * @src: char
 * @n: int
 * Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int length = 0;

	while (dest[length])
		length++;

	while (i < n && src[i] != '\0')
	{
		dest[length++] = src[i++];
	}
	dest[length] = '\0';

	return (dest);
}
