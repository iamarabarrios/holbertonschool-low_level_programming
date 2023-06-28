#include "main.h"
/**
 * _pow_recursion - potencia
 * @x: int
 * @y: int
 * Return: x
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	return (1);
	if (y < 0)
	return (-1);
	else
	return (_pow_recursion(x, y + 1) / x);
	return (_pow_recursion(x, y - 1) * x);
}
