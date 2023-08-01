#include "main.h"
/**
* print_numbers - imprime del 0 al 9 uno por linea
*
* Return: Always 0 (return)
**/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}

