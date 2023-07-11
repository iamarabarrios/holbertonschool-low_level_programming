#ifndef PRINT_NAME_H
#define PRINT_NAME_H
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_name - print name
*@name: pointer char
*@f: pointer
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

#endif
