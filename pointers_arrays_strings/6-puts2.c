#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * puts2 - imprime cada dos
 *@str: char
 *
 * Return: void
 *
 */
void puts2(char *str)
{
int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 'H')
			_putchar(str[i]);
	}
}
