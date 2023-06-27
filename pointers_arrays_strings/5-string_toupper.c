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

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		a[i] =(int)a[i] - 32;
	}
	return (a);

}
