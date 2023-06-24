#include "main.h"
#include <stdio.h>
/**
 * _atoi - convierta cadena en numero entero
 * @s: char
 *
 * Return: void
 *
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;

	while (*s == ' ')
	{
	s++;
	}

	if (*s == '-')
	{
	sign = -1;
	s++;
	}
	else if (*s == '+')
	{
	s++;
	}

	while (*s >= '0' && *s <= '9')
	{
	result = result * 10 + (*s - '0');
	s++;
	}

	return (result * sign);
}
