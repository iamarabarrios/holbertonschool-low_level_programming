#include "main.h"
/**
 * _strstr - compara dos cadenas
 * @haystack: punt char
 * @needle: punt char
 * Return: NULL
 *
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *i = haystack;
		char *j = needle;

		while (*j && (*i == *j))
		{
			++i;
			++j;
		}

		if (*j == '\0')
			return (haystack);

		++haystack;
	}

	return (NULL);
}
