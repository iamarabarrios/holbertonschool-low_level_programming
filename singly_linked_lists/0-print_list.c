#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list
 * @h: pointer
 * Return: number
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			i++;
		}
		else
			printf("[0] nil\n");

	h = h->next;
	}
	return (i);
}
