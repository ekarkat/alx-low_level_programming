#include "lists.h"

/**
 * add_nodeint - add node at the beginning of the list
 * @head: the address of head !!
 * @n : the new node value of n "node->n"
 * Return: new node address
*/


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}

	return (*head);
}
