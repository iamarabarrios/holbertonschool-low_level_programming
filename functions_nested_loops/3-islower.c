#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
* _islower - verificar si hay minusculas
* @c:int
* Return: Always 0 (return)
**/
int _islower(int c)
{
if(c >= 97 && c <= 122)
return(1);
return(0);
}
