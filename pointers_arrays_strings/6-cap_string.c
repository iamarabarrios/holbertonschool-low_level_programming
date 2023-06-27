#include "main.h"
/**
 * cap_string - cambia a mayus
 * @a: punt char
 * Return: void
 *
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		a[i] = (int)a[i] - 32;
	}
	return (a);
}
