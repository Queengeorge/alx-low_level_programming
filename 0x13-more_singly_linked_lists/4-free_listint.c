#include "lists.h"
/**
 * free_listint - used to free linked list
 * @head: listint_t list we are going to free
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
