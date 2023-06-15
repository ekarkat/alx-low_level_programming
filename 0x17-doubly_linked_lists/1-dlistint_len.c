#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - function that count all the elements of a dlistint_t list
 * @h : the head of the list
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
