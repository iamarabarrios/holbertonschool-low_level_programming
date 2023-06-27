#include "main.h"
/**
 * string_toupper - cambia de mayus a minu
 * @a: punt char
 * Return: void
 *
 */
char *string_toupper(char *a)
{
	int i;

	while (a[i])
	{
	if (a[i] >= 97 && a[i] <= 122)
	a[i] -= 32;

	i++;
	}

	return (a);

}
