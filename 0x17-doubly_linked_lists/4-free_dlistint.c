#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - add node at the end
 * @head : the head of the list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
