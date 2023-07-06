#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatena dos strings
 * @s1: char
 * @s2: char
 * @n: int
 * Return: puntero
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count;
	int	count1;
	int sign = n;
	char *str;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (sign >= j)
	{
		sign = j;
		str = malloc(sizeof(char) * (i + j + 1));
	}
	else
		str = malloc(sizeof(char) * (i + sign + 1));
	if (str == NULL)
		return (NULL);
	for (count = 0; count < i; count++)
	{
		str[count] = s1[count];
	}
	for (count1 = 0; count1 < sign; count1++)
	{
		str[count++] = s2[count1];
	}
	str[count++] = '\0';
	return (str);
}
