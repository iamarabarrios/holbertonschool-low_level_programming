#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - longitud
 * @s: int
 *
 * Return: void
 *
 */
void rev_string(char *s)

{
int i;
for (i = 0; s[i] == '\0'; i--)
{
printf("%s\n", s);
rev_string(s);
printf("%s\n", s);
}
}
