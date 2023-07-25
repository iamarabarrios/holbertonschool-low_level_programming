#include "lists.h"
#include <stdlib.h>

/**
 *add_dnodeint - add new node at beginning
 *@head: head
 *@n: int
 *Return: pointer at new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;

	if (*head != NULL)
		(*head)->prev = tmp;
	*head = tmp;

	return (tmp);
}
