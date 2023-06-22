#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * _puts - imprime
 * @str: int
 *
 * Return: void
 *
 */
void _puts(char *str)
{
int i;
int count = 0;
	for (i = 0; str[i] != '\0'; i++)
	count++;
	_putchar(count);
}
