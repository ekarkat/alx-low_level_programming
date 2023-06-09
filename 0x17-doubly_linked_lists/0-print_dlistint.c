#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h : the head of the list
 * Return: number of elements
*/

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
