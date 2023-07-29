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
	{
		_putchar('0');
		return;
	}

	while (size >= 0)
	{
	flag = ((n >> size) & 1) ? 1 : (flag ? _putchar('0') : 0);
		_putchar(((n >> size) & 1) ? '1' : 0);
		size--;
	}
} /**se usa signed porque sino el commpilador manda error, porque la*/
/**condicción de while siempre va a ser verdadera*/
