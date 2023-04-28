#include "lists.h"

/**
 * list_len - lenght of a list
 * @h: first node
 * Return: return the number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
