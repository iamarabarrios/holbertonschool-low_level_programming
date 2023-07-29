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

	return ((index > size) ? 1UL : ((n >> index) & 1));
} /**si index es mayor que size, es decir si index esta fuera de rango*/
/**return -1 por error y si no es asi return el value of bit*/
