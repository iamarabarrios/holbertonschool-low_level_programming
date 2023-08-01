#include "main.h"
#include <stdio.h>
/**
 * main - imprime su nombre
 * @argc: int
 * @argv: char
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s", argv[0]);
	printf("\n");
	}
	return (0);
}

