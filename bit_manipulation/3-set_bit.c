#include "main.h"

/**
 *set_bit - sets the value of a bit to 1
 *@n: ling int
 *@index: unsigned int
 *Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(*n) * 8 - 1;

	return ((index > size) ? -1 : (*n |= 1UL << index, 1));
}
/**con *n |= 1UL << index, 1 establecemos el bit en la posición de index*/
/*del numero que es apuntado por n*/
