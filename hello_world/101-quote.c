#include <stdio.h>
#include <unistd.h>
/**
 * main - imprime la frase
 * Return: 1
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful"
	"\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}