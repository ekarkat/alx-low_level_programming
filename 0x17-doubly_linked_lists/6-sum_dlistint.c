#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_dlistint - sum n in nodes
 * @head : the head of the list
 * Return: the sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
