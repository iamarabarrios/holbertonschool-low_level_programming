#include "main.h"
/**
 * cap_string - principio mayuscula
 * @s: mayuscula principio
 * Return: pointer to s
 */
char *cap_string(char *s)
{
int a = 0, i;
int b = 13;
char c[] = {32, '\t', '\n', ',', '.', ';', '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < b)
		{
			if ((a == 0 || s[a - 1] == c[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
