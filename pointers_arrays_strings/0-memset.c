#include "main.h"
/**
 * _memset - llena la memoria
 * @s: punt char
 * @b: char
 * @n:int
 * Return: void
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
