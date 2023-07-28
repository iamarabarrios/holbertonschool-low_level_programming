#include "lists.h"
#include <stdlib.h>

/**
 *get_dnodeint_at_index - returns the nth node of a list
 *@head: dlistint_t
 *@index: int
 *Return: pointer
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		head = head->next;
	index--;
	}

	return (head);

}

/**head is the pointer to the first node in the list*/
/**index is the node we want*/
