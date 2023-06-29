#include "main.h"
/**
 * is_prime_number - numero primo
 * @n: number for input
 * Return: n
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	if (n % 2 == 0)
	{
	return (0);
	}
	n++;

	return (1);

}
