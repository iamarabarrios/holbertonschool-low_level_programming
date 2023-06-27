#include "main.h"
/**
 * _strpbrk - lenght and bytes
 * @s: punt char
 * @accept: punt char
 * Return: NULL
 *
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *p = accept;

		while (*p)
		{
			if (*p == *s)
				return (s);
			++p;
		}
		++s;
	}
	return (NULL);

}
