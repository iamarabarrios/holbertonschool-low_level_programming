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
int count = 0;
	for (i = 0; str[i] != '\0'; i += 2)
	count++;
	_putchar (count);
}
