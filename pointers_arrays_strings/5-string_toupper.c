#include "main.h"
/**
 * string_touper - cambia de mayus a minu
 * @s1: punt char
 * @s2: punt char
 * Return: dest
 *
 */
char *string_toupper(char *){
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

	s1++;
	s2++;

	}

	return (*s1 - *s2);

}
