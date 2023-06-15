#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
* print_alphabet - imprime alfabeto
*
* Return: Always 0 (return)
**/
void print_alphabet(void)
{
int i;
for (i = 'a'; i < 'z'; i++)
putchar(i);
putchar('\n');
}
