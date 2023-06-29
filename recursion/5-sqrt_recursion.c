#include "main.h"
/**
 *_sqrt - calcula raiz cuadrada
 *@n: int
 *@m: int
 *Return: raiz cuadrada
 */
int _sqrt(int n, int m)
{
	int sqrt = m * m;
		if (sqrt == n)
			return (m);
		if (sqrt > n)
			return (-1);
		return (_sqrt(n, m + 1));

}

/**
 *_sqrt_recursion - retorna la raiz cuadrada
 *@n: int
 *
 *Return: raiz cuadrada
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
