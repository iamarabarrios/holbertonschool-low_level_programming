#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
* _isalpha - verifica su hay caracteres alfabeticos
*@c:int
* Return: Always 0 (return)
**/
int _isalpha(int c)
{
if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
return (1);
return (0);
}
