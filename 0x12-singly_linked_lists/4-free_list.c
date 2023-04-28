#include "lists.h"

/**
 * free_list - Frees list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		free(head->str);
		free(head);
		head = tmp->next;
	}
}
