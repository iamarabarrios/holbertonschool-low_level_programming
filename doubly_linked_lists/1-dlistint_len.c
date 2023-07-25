#include "lists.h"

/**
 *dlistint_len - return the number of elements
 *@h: pointer
 *Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
