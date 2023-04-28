#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: the list
 * @str: string
 * Return: the address of the new element or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int ln;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	for (ln = 0; str[ln] != '\0'; ln++)
	;

	newnode->next = *head;
	newnode->str = strdup(str);
	newnode->len = ln;
	*head = newnode;
	return (newnode);
}
