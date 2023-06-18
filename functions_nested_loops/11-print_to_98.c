#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
* print_to_98 - imprime los naturales
*@n:naturales
* Return: Always 0 (return)
**/
void print_to_98(int n)
{
int i;
if (n < 98)
for (i = n; i < 99; i++);
if (i != n)
{
printf(", ");
printf("%i", i);
}
if (n > 98)
{
for (i = 0; i > 98; i--);
printf(", ");
printf("%i", i);
}
if (n == 98)
{
printf("98");
_putchar('\n');
}
}

