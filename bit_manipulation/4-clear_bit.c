#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0
 *@n: long int
 *@index: unsigned int
 *Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(*n) * 8 - 1;

	return ((index > size) ? -1 : (*n &= ~(1UL << index), 1));

}
/**borra el bit en la posicion index del numero n*/
/**~sirve para invertir el numero, si es 0 pasa a ser 1 y al revés*/
