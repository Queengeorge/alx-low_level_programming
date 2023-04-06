#include "lists.h"
/**
 * free_listint2 - will free  linked list
 * @head:is a pointer to  listint_t list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;
	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
