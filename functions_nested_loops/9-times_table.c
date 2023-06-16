#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
* times_table - imprime tabla del 9
*
* Return: Always 0 (return)
**/
void times_table(void)
{
int i;
int j;
int firstdigit;
int seconddigit;
int result;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
result = i * j;
firstdigit = result / 10;
seconddigit = result % 10;
if (result <= 9 && j != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
if (result > 9 && j != 0)
{
_putchar(44);
_putchar(32);
}
if (result > 9)
_putchar(firstdigit + 48);
_putchar(seconddigit + 48); 
}
_putchar('\n');
}
}
