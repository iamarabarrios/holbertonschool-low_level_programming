#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
* print_line - imprime linea
*@n:int
* Return: Always 0 (return)
**/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
for (int i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
