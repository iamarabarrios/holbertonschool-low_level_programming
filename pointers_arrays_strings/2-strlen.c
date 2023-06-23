#include <unistd.h>
#include "main.h"
/**
 * _strlen - longitud
 * @s: int
 *
 * Return: void
 *
 */
int _strlen(char *s)
{
int i;
int count = 0;
	for (i = 0; s[i] != '\0'; i++)
	count++;
	return (count);
}
