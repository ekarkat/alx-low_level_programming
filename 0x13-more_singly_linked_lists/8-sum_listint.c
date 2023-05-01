#include "lists.h"

/**
 * sum_listint - sum all node->n data
 * @head: list head
 * Return: return sum
*/

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = head->n;
		head = head->next;
	}
	return (sum);
}