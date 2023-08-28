#include "lists.h"

/**
 * free_listint2 - similar to the first but more advanced
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *tompere;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tompere = *head;
		*head = (*head)->next;
		free(tompere);
	}
	*head = NULL;
}
