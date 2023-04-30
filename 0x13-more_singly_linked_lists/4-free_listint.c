#include "lists.h"

/**
 * free_listint - free nodes
 * @head : head nodes
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(head);
		head = temp->next;
	}
}
