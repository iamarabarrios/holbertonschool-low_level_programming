#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
* print_alphabet_x10 - imprime alfabeto10
*
* Return: Always 0 (return)
**/
void print_alphabet_x10(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
putchar(j);
}
putchar('\n');
}
