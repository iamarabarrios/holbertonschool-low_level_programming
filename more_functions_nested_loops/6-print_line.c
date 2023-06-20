#include "main.h"
/**
* print_line - imprime linea
*@n:int
* Return: Always 0 (return)
**/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
