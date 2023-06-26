#include "main.h"
/**
 * _strcmp - compara dos cadenas
 * @s1: punt char
 * @s2: punt char
 * Return: dest
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);

	s1++;
	s2++;

		}
	}
	return (*s1 - *s2);

}
