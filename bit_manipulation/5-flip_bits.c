#include "main.h"

/**
 *flip_bits - the number of bits you would need to flip
 *@n: long int
 *@m: long int
 *Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size = sizeof(n) * 8 - 1;
	unsigned long int flip = 0;
	unsigned long int i = 0;

	while (i <= size)
	{
		if ((n & 1) != (m & 1))
			flip++;

		n = n >> 1;
		m = m >> 1;

		i++;
	}
	return (flip);
}
