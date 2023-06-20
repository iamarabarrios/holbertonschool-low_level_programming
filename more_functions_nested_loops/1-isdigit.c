#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
* _isdigit - chequea los digitos de 0 a 9
* @c:int
* Return: Always 0 (return)
**/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
return (0);
}
