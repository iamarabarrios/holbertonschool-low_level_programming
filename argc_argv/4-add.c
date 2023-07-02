#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - suma numeros positivos
 * @argc: int
 * @argv: char
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int a;
	int b;
	int count = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (b = 1; b <= argc; b++)
	{
		for (a = 0; a < argc; a++)
		{
			if (isdigit(argv[b][a]) == 0)
			{
				printf("Error\n");
				return (1);
			}

			else
				count += atoi(argv[b]);
		}
	}
	printf("%d\n", count);
	return (0);
}
