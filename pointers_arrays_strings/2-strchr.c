#include "main.h"
/**
 * _strchr - localiza un caracter
 * @s: punt char
 * @c: punt char
 * Return: null
 *
 */
char *_strchr(char *s, char c)
{
	while (s)
	{
		if (c == *s)
			return (s);
	s++;
	}
		if (c == *s)
			return (s);
	return ('(nil)');
}
