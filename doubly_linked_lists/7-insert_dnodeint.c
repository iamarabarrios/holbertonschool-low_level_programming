#include "lists.h"
#include <stdlib.h>
/**
*insert_dnodeint_at_index - insert new node
*@h: dlistint_t
*@idx: unsigned int
*@n: int
*Return: pointer
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
									unsigned int idx,
												int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (idx > 1 && current)
	{
		current = current->next;
		idx--;
	}
	if (!current)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;

	if (current->next)
	{
		current->next->prev = new_node;
	current->next = new_node;
	}

	return (new_node);
}
