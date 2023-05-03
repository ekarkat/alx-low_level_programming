#include "lists.h"

/**
 * check_address - check if the address of node is not repeated before
 * @head : head of node
 * @node : the node to be checked
 * @n : the nth memberr
 * Return: return 0 if its new 1 if its been repeated before
*/

int check_address(const listint_t *head, const listint_t *node, int n)
{
	int i = 0;

	if (node == NULL)
		return (0);
	while (head->next != NULL && i < n)
	{
		if (node == head)
			return (1);
		head = head->next;
		i++;
	}
	return (0);
}


/**
 * free_listint2 - frees a linked list
 * @h: list head
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t n;

	if (!h)
		return (0);
	while (*h)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		n++;
	}
	h = NULL;
	return (n);
}