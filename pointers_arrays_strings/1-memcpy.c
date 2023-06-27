#include "main.h"
/**
 * _memcpy - llena la memoria
 * @dest: punt char
 * @src: punt char
 * @n:int
 * Return: void
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
