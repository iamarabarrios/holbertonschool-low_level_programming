#include "main.h"
/**
 * _strlen - counts the length of a string
 * @s: the string to count
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	for (; s[count] != '\0';)
		count++;
	return (count);
}
/**
 * rev_string - al reves
 * @s: int
 *
 * Return: void
 *
 */
void rev_string(char *s)
{
	char ch, *p, *q;

for (q = s; *q != '\0'; ++q)
;
if (q > s)
--q;

	for (p = s; p < q; ++p, --q)
	{
	ch = *p;
	*p = *q;
	*q = ch;
	}
}
