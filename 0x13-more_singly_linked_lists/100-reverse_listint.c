#include "lists.h"

/**
 * reverse_listint -  a function that reverses a listint_t linked list.
 * @head : head of the list
 * Return: return the address of the new list head
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next1, *next2;

	if (*head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	/*next1 save the next node, next2 save the one after next node*/
	next1 = (*head)->next;
	next2 = next1->next;
	/*setting the head of the list ->next to NULL*/
	(*head)->next = NULL;
	next1->next = *head;
	*head = next1;
	next1 = next2;
	if (next2 != NULL)
	{
		next2 = next1->next;
		/*looping through the other nodes*/
		while (next2 != NULL)
		{
			next1->next = *head;
			*head = next1;
			next1 = next2;
			next2 = next1->next;
		}
		next1->next = *head;
		*head = next1;
		return (*head);
	}
	return (*head);
}
