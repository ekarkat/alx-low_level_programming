#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - add node at idx
 * @h : the head of the list
 * @idx: the index
 * @n : the element
 * Return: the node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int count = 0, i = 0;
	dlistint_t *new  = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if ((*h == NULL && idx != 0) || h == NULL)
		return (NULL);
	else if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (idx > count)
		return (NULL);
	else if (idx == count)
		return (add_dnodeint_end(h, n));
	temp = *h;
	for (; i < idx; i++)
		temp = temp->next;
	new->prev = temp->prev;
	new->next = temp;
	temp->prev->next = new;
	temp->prev = new;
	return (new);
}
