#include "main.h"
/**
* print_most_numbers - verificar si hay mayusculas
*
* Return: Always 0 (return)
**/
void print_most_numbers(void)
{
int i;
for (; i <= 9; i++)
{
if (i != 2 || i != 4)
{
_putchar(i);
}
}
_putchar('\n');
}
