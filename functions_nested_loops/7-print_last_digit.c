#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
* print_last_digit - ultimo digito
*@u: int
* Return: Always 0 (return)
**/
int print_last_digit(int u)
{
int result;
if (u < 0)
u = u * -1;
result = u % 10;
_putchar(result + 48);
return(result);
}
