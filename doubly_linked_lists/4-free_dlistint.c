#include "lists.h"
#include <stdlib.h>

/**
 *free_dlistint - free the list
 *@head: head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		tmp->prev = NULL;
		tmp->next = NULL;
		free(tmp);
	}
}
