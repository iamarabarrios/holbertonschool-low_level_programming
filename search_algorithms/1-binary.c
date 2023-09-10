#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array of integers
*@array: is a pointer to the first element of the array to search in
*@size: is the number of elements in array
*@value: is the value to search for
*Return: the index where value is located or -1
*/

int binary_search(int *array, size_t size, int value)
{
	int i;
	int left = 0;
	int right = (int)size - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			if (i == right)
			{
				printf("%d", array[i]);
			}
			else
			{
			printf("%d, ", array[i]);
			}
		}

		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}

