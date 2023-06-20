#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
* print_line - imprime linea
*@n:int
* Return: Always 0 (return)
**/void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			putchar(95);
		}

		_putchar('\n');
	}
} 
