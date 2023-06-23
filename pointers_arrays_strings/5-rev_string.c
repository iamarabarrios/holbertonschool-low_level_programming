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
	int i;
	int size = _strlen(s);

	for (i = size; i >= 0; i++)
	{
	for (i = size; i >= 0; i--)
	{

	}
	}
	_putchar('\n');
}
