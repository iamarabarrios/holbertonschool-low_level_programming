#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - imprimir
*
* Return: Always 0 (return)
**/
int main(void)
{
int i;
for (i = 97; i < 123; i++)
{
if (i != 113 && i != 101)
putchar(i);
}
putchar('\n');
return (0);
}
