#include "lists.h"
/**
 * listint_len - returns the number of all the elements in linked list
 * @h: linked list of type listint_t
 * Return: number of all nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t val = 0;

	while (h)
	{
	val++;
	h = h->next;
	}
	return (val);
}
