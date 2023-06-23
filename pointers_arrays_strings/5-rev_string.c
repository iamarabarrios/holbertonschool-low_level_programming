#include "main.h"
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

	for (i = size - 1; i >=	0; i--)
	{
	_putchar(s[i]);
	}
}
