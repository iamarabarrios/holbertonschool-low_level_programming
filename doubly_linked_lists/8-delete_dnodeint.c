#include "lists.h"
#include <stdlib.h>
/**
 *delete_dnodeint_at_index - deletes the node at index
 *@head: dlistint_t
 *@index: unsigned int
 *Return: node deleted
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp_head = *head;
	unsigned int i;

	if (!*head || !head)
		return (-1);

	if (index == 0)
	{
		*head = tmp_head->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp_head);
		return (1);
	}
	for (i = 0; i < index && tmp_head; i++)
		tmp_head = tmp_head->next;

	if (i < index || !tmp_head)
		return (-1);

	tmp_head->prev->next = tmp_head->next;

	if (tmp_head->next)
		tmp_head->next->prev = tmp_head->prev;

	free(tmp_head);
	return (1);
}
