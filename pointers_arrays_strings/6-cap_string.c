#include "main.h"
/**
 * cap_string - cambia a mayus
 * @a: punt char
 * Return: s
 *
 */
char *cap_string(char *a)
{
	int x = 0;

	while (a[x])
	{
		while (!(a[x] >= 'a' && a[x] <= 'z'))
			x++;
	if (a[x - 1] == ' ' ||
			a[x - 1] == '\t' ||
			a[x - 1] == '\n' ||
			a[x - 1] == ',' ||
			a[x - 1] == ';' ||
			a[x - 1] == '.' ||
			a[x - 1] == '!' ||
			a[x - 1] == '?' ||
			a[x - 1] == '"' ||
			a[x - 1] == '(' ||
			a[x - 1] == ')' ||
			a[x - 1] == '{' ||
			a[x - 1] == '}' ||
			x == 0)
		a[x] -= 32;
		x++;
	}
	return (a);
}
