#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list.
 * @index: index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int k = 0;

	if (head == NULL)
		return (NULL);

	while ((k < index) && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (k == index)
		return (head);

	return (NULL);
}
