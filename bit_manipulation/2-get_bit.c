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

/**return ((index > size) ? -1 : ((n >> index) & 1));*/
/**me dice que no se puede -1 pero si uso 1UL me devuelve 1 positivo*/
/**si index es mayor que size, es decir si index esta fuera de rango*/
/**return -1 por error y si no es asi return el value of bit*/
