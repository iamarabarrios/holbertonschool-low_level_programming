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

for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
