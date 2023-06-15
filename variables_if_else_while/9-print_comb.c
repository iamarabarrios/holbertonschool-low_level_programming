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
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
