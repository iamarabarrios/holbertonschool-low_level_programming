#include "main.h"
/**
 * _sqrt - raiz cuadrada
 * @n: int
 * @m: int
 * Return: 0
*/

int _sqrt(int n, int m)
{
	int sqrt = m * m;
		if (sqrt == n)
			return (m);
		if (sqrt > m)
			return (-1);
		return (_sqrt(n, m + 1));
}

/**
 * * _sqrt_recursion - raiz cuadrada
 * @n: int
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
