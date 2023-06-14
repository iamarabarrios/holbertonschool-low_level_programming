#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - imprimir
 *
 * Return: Always 0 (return)
 **/
int main(void)
{
	int n;
        int random;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	random = n % 10;
	printf("last digit of %d", random)
	if(random > 5)
	printf(" and is greater than 5\n");
	if(random == 0)
	printf(" and is 0\n");
	if(random < 6 && random != 0)
	printf(" and is less than 6 and not 0\n");
	return (0);
}
