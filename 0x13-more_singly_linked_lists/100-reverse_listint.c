#include "lists.h"

/**
 * reverse_listint - reverse  linked list
 * @head: points to first node in the list
 * Return: pointer to first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *present = *head;
	listint_t *next = NULL;

	while (present)
	{
		next = present->next;

		present->next = prev;

		prev = present;

		present = next;
	}

	*head = prev;

	return (*head);
}

