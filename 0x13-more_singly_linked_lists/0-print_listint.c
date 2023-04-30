#include "lists.h"

/**
 * print_listint - all the elements of lisint_t
 * @h: the list
 * Return: return the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t n;
	const struct listint_s *temp;

	temp = h;
	n = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}

	return (n);


}
