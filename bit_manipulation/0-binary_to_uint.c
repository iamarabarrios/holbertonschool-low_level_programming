#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/**
 *binary_to_uint - converts a binary number in unsigned int
 *@b: char
 *Return: unsigned
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		decimal = (decimal << 1) + (*b - '0');
		b++;
	}
	return (decimal);
}
