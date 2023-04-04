/**
 * print_listint - print all elements of linked list
 * @h: linked list of the type listint_t
 * Return:all the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t val = 0;
	for (const listint_t *present = h; present != NULL; present = present->next)
	{
		printf("%d\n", present->n);
		val++;
	}
	return val;
}
