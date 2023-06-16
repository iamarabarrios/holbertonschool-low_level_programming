#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
* print_sign - imprime el signo del numero
* @n:numeros
* Return: Always 0 (return)
**/
int print_sign(int n)
{
if(n > 0)
{
_putchar(43);
return (1);
}
else if(n == 0)
{
_putchar(48);
return (0);
}
else if(n < 0)
{
_putchar(45);
return (-1);
}
putchar('\n');
return(0);
}
