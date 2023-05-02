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

/**
 * insert_nodeint_at_index - insert node at idx
 * @head : head of the list
 * @n : the data node->n
 * @idx : index of new node
 * Return: the address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node;
	unsigned int i = 0;

	temp = *head;
	if (*head == NULL)
		return (NULL);
	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/*initialize new node n*/
	new_node->n = n;
	if (idx == 0)
		return (add_nodeint(head, n));
	/*going to the node idx-1*/
	while (i < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	/*checking whether its possible to insert the new_node at idx*/
		new_node->next = ((temp->next));
		temp->next = new_node;
		return (new_node);
}
