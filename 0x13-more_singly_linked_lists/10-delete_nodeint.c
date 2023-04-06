#include "lists.h"

/**
 * delete_nodeint_at_index - delete node in linked list at specific index
 * @head: points to first element in the list
 * @index: index of node to delete
 *
 * Return: 1 (Success), -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;

	listint_t *present = NULL;

	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;

		free(temp);

		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	present = temp->next;

	temp->next = present->next;

	free(present);

	return (1);
}

