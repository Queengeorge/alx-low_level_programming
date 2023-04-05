#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - print all elements of linked list
 * @h: linked list of the type listint_t
 * Return:all the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t val = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		val++;
	}
	return (val);
}
