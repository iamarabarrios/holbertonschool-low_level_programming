#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array of integers
*@size: is the number of elements in array
*@value: is the value to search for
*Return: the index where value is located or -1
*
*/

int binary_search(int *array, size_t size, int value)
{ 
    int i;
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        printf("Searching in array[%d:%d]: ", left, right);

        for (i = left; i <= right; i++)
        {
            printf("%d ", array[i]);
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