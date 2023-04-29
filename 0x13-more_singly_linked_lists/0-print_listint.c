#include "lists.h"

/**
 * print_listint - all the elements of lisint_t
 * @h: the list
 * Return: return the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	printf("%d", h->n);
}
