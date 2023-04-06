#include "lists.h"
/**
 * add_nodeint_end - will add a node to the end of the linked list
 * @head: points to the first element in the linked list
 * @n: will be used to insert the new element
 * Return: pointer to a new node, also NULL (if it fails)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_el;

	listint_t *temp = *head;

	new_el = malloc(sizeof(listint_t));

	if (!new_el)
		return (NULL);
	new_el->n = n;

	new_el->next = NULL;
	if (*head == NULL)
	{
		*head = new_el;

		return (new_el);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_el;
	return (new_el);
}
