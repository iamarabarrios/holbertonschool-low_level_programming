#include "main.h"
/**
 * factorial - factorial
 * @n: int
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	else
	return (n * factorial(n - 1));
}
