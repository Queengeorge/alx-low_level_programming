#include "lists.h"
/**
 * print_listint - will print all elements of the linked list
 * @h: the linked list of type listint_t
 * Return: all nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t val = 0;

	while (h)
	{
		printf("%d\n", h->n);
		val++;
		h = h->next;
	}
	return (val);
}
