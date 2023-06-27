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
		char *i = accept;

		while (*i)
		{
			if (*i == *s)
				return (s);
			++i;
		}
		++s;
	}
	return (NULL);

}
