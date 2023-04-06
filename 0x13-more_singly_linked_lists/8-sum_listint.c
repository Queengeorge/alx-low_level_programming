#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: final sum
 */
int sum_listint(listint_t *head)
{
	return traverse_listint_and_sum(head, 0);
}
/**
 * traverse_listint_and_sum - will traverse the list recursively and return the sum of all element
 * @head: is the current node in the linked list
 * @sum: current sum
 * Return:final sum
 */
int traverse_listint_and_sum(listint_t *head, int sum)
{
	if (head == NULL)
		return sum;
	sum += head->n;
	return traverse_listint_and_sum(head->next, sum);
}
