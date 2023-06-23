#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - longitud
 * @s: int
 *
 * Return: void
 *
 */
void rev_string(char *s)
{
int i;
int size = strlen(s);

for (i = size - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
