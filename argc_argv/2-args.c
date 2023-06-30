#include "main.h"
#include <stdio.h>
/**
 * main - imprime argumentos
 * @argc: int
 * @argv: char
 * Return: 0
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);

}
