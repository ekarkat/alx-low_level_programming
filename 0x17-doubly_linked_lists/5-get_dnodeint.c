#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - add node at the end
 * @head : the head of the list
 * @index: the index
 * Return: the node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0, count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	if (index > count - 1)
		return (NULL);
	for (; i < index; i++)
		temp = temp->next;

	return (temp);
}
