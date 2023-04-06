#include "lists.h"
/**
 * pop_listint -will delete the head node of  linked list
 * @head: points to the first element of linked list
 * Return:data in the elements previously deleted, also 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	val = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (val);
}
