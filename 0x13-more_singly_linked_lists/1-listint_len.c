#include "lists.h"

/**
 * listint_len - a function that count number of nodes
 * @h: the list to count
 * Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	int i = 0;
	
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
	
}