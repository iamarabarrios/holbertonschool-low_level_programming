#include <unistd.h>
#include "main.h"
/**
 * puts2 - imprime cada 2
 * @str: char
 *
 * Return: void
 *
 */
void puts2(char *str)
{
int i;
int count = 1;
for (i = 0; str[i] != '\0'; i++)
{
if (count % 2 != 0)
_putchar(str[i]);
count++;
}
_putchar('\n');
}
