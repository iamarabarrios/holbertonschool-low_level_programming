#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
* jack_bauer - imprime fecha
*
* Return: Always 0 (return)
**/
void jack_bauer(void)
{
int hour;
int mimnute;
for(hour = 0; <= 23; hour++)
for(minute = 0; <= 59; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
