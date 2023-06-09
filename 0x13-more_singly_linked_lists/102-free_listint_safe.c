#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: list head
 * Return: number of free
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t n;
	listint_t **head = h;

	if (!h)
		return (0);
	while (*h)
	{
		if (temp == NULL)
		{
			*head = NULL;
			return (n);
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
		n++;
	}
	h = NULL;
	return (n);
}
