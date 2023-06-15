#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - add node at the end
 * @head : the head of the list
 * @n: the nupmber
 * Return: number of elements
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while ((temp)->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;

	return (new);
}
