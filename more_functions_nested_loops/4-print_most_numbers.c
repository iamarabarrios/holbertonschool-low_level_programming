#include "main.h"
/**
* print_most_numbers - verificar si hay mayusculas
*
* Return: Always 0 (return)
**/
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i == 2 || i == 4)
{
continue;
}
_putchar(i + '0')
}
_putchar('\n');
}
