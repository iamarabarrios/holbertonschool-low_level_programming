
#include "main.h"

/**
 *print_binary - prints the binary representation
 *@n: long int
 */

void print_binary(unsigned long int n)
{
	signed long int size = sizeof(n) * 8 - 1;
	int flag = 0;

	if (n == 0)
		_putchar('0');

	while (size >= 0)
	{
		if ((n >> size) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		size--;
	}
} /**se usa signed porque sino el commpilador manda error, porque la*/
/**condicción de while siempre va a ser verdadera*/
