#include "search_algos.h"

/**
*linear_search - searches for a value in an array of integers
*@array: is a pointer to the first element of the array to search in
*@size: is the number of elements in array.
*@value: is the value to search for.
*Return: the first index where value is located or -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Checking array[%lu] = %d\n", (unsigned long)i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

