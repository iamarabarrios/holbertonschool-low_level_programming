#include "main.h"
#include <string.h>
/**
 *reverse_array- imprime al reves
 *@n: string
 *@a: puntero
 *Return: void
 */
void reverse_array(int *a, int n)
{
	char m;
	char j;
	char i;

	for (i = a[n]; i != '\0'; ++i)
	;
	if (i > n)
	--i;

	for (j = n; a[n] < j; ++j, --i)
	{
	m = j;
	j = i;
	i = m;
	}
}
