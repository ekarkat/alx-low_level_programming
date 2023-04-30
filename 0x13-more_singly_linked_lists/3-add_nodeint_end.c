#include "lists.h"

/**
 * add_nodeint_end - add node at the end of a list
 * @head : the address of head node
 * @n : the value of the new node new->n
 * Return: return the address of the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		/*Setting new node value*/
		new_node->n = n;
		new_node->next = NULL;
		/*Changing last node next value*/
		temp->next = new_node;
	}

	return (new_node);
}
