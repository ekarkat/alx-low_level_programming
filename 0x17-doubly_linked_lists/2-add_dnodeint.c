#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - add node at the head
 * @head : the head of the list
 * @n: the nupmber
 * Return: number of elements
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	if (*head != NULL)
		(*head)->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	*head = new;
	return (new);
}
