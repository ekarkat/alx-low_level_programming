#include "lists.h"

/**
 * check_address - check if the address of node is not repeated before
 * @head : head of node
 * @node : the node to be checked
 * @n : the nth memberr
 * Return: return 0 if its new 1 if its been repeated before
*/

int check_address(const listint_t *head, const listint_t *node, int n)
{
	int i = 0;

	if (node == NULL)
		return (0);
	while (head->next != NULL && i < n)
	{
		if (node == head)
			return (1);
		head = head->next;
		i++;
	}
	return (0);
}

/**
 * print_listint_safe - all the elements of lisint_t
 * @head: the list
 * Return: return the number of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	int i = 0;
	const listint_t *the_head, *temp;
	size_t n;

	if (head == NULL)
		exit(98);
	the_head = head;
	temp = head;
	n = 0;
	while (temp != NULL)
	{
		if (check_address(the_head, temp, i) == 1)
		{
			printf("-> [%p] %d\n", (void *) temp, temp->n);
			return (n);
		}
		else
			printf("[%p] %d\n", (void *) temp, temp->n);
		temp = temp->next;
		i++;
		n++;
	}

	return (n);

}
