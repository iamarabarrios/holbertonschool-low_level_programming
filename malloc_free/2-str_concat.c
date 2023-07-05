#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatena dos strings
 *@s1: char
 *@s2: char
 *Return: resultado
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int m;

	while (s1[i] != '\0')
		i++;

	for (m = 0; s2[m] != '\0'; m++, i++)
	{
		s1[i] = s2[m];
	}
	s1[i] = '\0';

	return (s2);
}
