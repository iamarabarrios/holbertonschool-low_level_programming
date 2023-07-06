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
	int j = 0;
	char *str;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (m = 0; s1[m] != '\0'; m++)
		i++;

	for	(m = 0; s2[m] != '\0'; m++)
		j++;

	str = malloc(sizeof(char *) * i + j + 1);

	if (str == NULL)
		return (NULL);

	for (m = 0; m != i; m++)
		str[m] = s1[m];

	for (m = 0; m != j; m++, i++)
	{
	str[i] = s2[m];
	}
	return (str);

}
