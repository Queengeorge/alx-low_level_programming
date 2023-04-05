#include "lists.h"
/**
 * add_nodeint - add a node at the beginning of  linked list
 * @head: pointer to the first node in the list
 * @n:  used to insert in that new node
 * Return: pointer to the new head (new_var) of the list, will be NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_var;

	if (!head)
		return (NULL);
	new_var = malloc(sizeof(listint_t));
	if (!new_var)
		return (NULL);
	new_var->n = n;
	new_var->next = *head;
	*head = new_var;
	return (new_var);
}
