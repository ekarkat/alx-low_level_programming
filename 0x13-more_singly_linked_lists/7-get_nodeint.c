#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the head of list
 * @index: the index node
 * Return: the inedex node "3th node" "5th node" ....
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_inedex;
	unsigned int i;

	i = 0;

	if (head == NULL)
		return (NULL);

	while (i <= index)
	{
		if (head == NULL)
			return (NULL);
		node_inedex = head;
		head = head->next;
		i++;
	}

	return (node_inedex);
}
