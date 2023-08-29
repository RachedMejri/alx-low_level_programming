#include "lists.h"
/**
 * pop_listint - delting the head
 * @head: haed
 *
 * Return: 0 if head is empty otherwise node data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tomp;

	if (*head == NULL)
		return (0);
	tomp = *head;
	n = tomp->n;
	*head = tomp->next;
	free(tomp);
	return (n);
}
