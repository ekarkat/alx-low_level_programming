#include "lists.h"

/**
 * find_listint_loop - find loop
 * @head : head of list
 * Return: return pointer of the start of the loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	int i = 0;
	listint_t *node;

	node = head;
	if (node == NULL)
		return (NULL);
	while (head->next != NULL)
	{
		if (check_address(node, head, i) == 1 && i != 0)
		{

			return (head);
		}
		head = head->next;
	}
	return (NULL);
}