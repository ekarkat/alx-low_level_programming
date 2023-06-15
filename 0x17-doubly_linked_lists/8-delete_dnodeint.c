#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_first - delete first node
 * @head : the head of the list
 * Return: the node n
*/
int delete_first(dlistint_t **head)
{
	dlistint_t *temp = *head;

	if (*head == NULL || head == NULL)
		return (-1);
	temp = temp->next;
	free(*head);
	if (temp != NULL)
		temp->prev = NULL;
	*head = temp;
	return (1);
}
/**
 * delete_last - delete last node
 * @head : the head of the list
 * Return: the node n
*/
int delete_last(dlistint_t **head)
{
	dlistint_t *temp = *head;
	dlistint_t *help;

	while (temp->next != NULL)
		temp = temp->next;
	help = temp->prev;
	help->next = NULL;
	free(temp);
	return (1);
}

/**
 * delete_dnodeint_at_index - delete node at idx
 * @head : the head of the list
 * @index: the index
 * Return: the node n
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *help;
	unsigned int count = 0, i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	else if (index == 0)
		return (delete_first(head));
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	temp = *head;
	if (index == count - 1)
		return (delete_last(head));
	if (index >= count)
		return (-1);
	for (; i < index - 1; i++)
		temp = temp->next;
	help = temp->next;
	temp->next = help->next;
	help->next->prev = temp;
	free(help);
	return (1);
}
