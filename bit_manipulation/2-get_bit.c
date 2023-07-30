#include "main.h"

/**
 *get_bit - returns the value of a bit at a given index.
 *@n: long int
 *@index: int
 *Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8 - 1;

	while (index > size)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
