#include "main.h"
/**
 * _strspn - largo
 *@s: punt char
 *@accept: punt char
 * Return: numero de bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *principio = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = principio;
		if (flag == 0)
			break;
	}
	return (count);
}
