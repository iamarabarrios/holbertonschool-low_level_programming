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
char i;

for (i = 0; str[i] != '\0'; i++)
_putchar(i);
}
