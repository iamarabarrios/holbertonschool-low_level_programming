#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * puts_half - imprime la mitad
 * @str: int
 *
 * Return: void
 *
 */
void puts_half(char *str)
{
int i;
int size = 0;

while (str[size] != '\0')
{
size++;
}
for (i = size / 2; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}

