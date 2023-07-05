#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - retorna un puntero
 *@width: int
 *@height: int
 *Return: puntero
 */
int **alloc_grid(int width, int height)
{
	int **i;
	int j;
	int s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	i = (int **)malloc(sizeof(int *) * height);

	if (i == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < height; j++)
	{
		i[j] = (int *)malloc(sizeof(int) * width);
		if (i[j] == NULL)
		{
			for (s = 0; s < j; s++)
			{
				free(i[s]);
			}
			free(i);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (s = 0; s < width; s++)
		{
			i[j][s] = 0;
		}
	}
	return (i);
}
