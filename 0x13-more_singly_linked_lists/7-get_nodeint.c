#include "lists.h"
/**
 * get_nodeint_at_index - will return a node at an index in linked list
 * @head: first node in linked list
 * @index: index of a node to return
 * Return: pointer to the node of interest,  NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	listint_t *present;

	if (!head)
		return (NULL);
	present = head;

	for (i = 0; i < index && present; i++)
		present = present->next;

	if (i == index && present)
		return (present);
	return (NULL);
}
