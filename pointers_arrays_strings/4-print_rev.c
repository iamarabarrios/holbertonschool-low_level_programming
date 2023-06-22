#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * print_rev - imprime al reves
 * @s: char
 *
 * Return: void
 *
 */
void print_rev(char *s)
{
int i;
int count = 0;
for (i = 0; s[i] != '\0'; i++)
{
	count++;
	_putchar(count);
}
}
