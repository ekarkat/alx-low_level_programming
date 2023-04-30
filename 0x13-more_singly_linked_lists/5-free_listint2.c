#include "lists.h"

/**
 * free_listint2 - free nodes
 * @head : head nodes
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		free(*head);
		*head = temp->next;
	}
}
