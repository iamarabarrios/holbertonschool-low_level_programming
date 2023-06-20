#include "main.h"
/**
* print_diagonal - imprime diagonal
*@n:int
* Return: Always 0 (return)
**/
void print_diagonal(int n)
{
int i;
int	j;

	i = 0;

	while (n > 0)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
		n--;
	}
	if (i < 1)
		_putchar('\n');
}
