#include "lists.h"

/**
 * pop_listint - delete the head node of a list
 * @head : the node head
 * Return: return head->n of the deleted node
*/

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	num = (*head)->n;
	*head = (*head)->next;
	free(*head);
	return (num);
}
