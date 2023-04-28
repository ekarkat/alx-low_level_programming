#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: the list
 * @str: string
 * Return: the address of the new element or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	unsigned int ln;

	temp = *head;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	for (ln = 0; str[ln] != '\0'; ln++)
	;
	newnode->next = NULL;
	newnode->str = strdup(str);
	newnode->len = ln;

	if (temp == NULL)
		*head = newnode;
	else
	{
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;
	}
	return (newnode);
}
