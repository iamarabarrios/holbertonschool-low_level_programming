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
int bool = 0;
	while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	{
	bool = 1;
	}
	s1++;
	s2++;
	}

	if (bool == 0)
	return (0);
	else
	return (1);
}
