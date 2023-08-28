#include "lists.h"

/**
 * free_listint - didnt we do this last time?
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *tomp;

	while (head != NULL)
	{
		tomp = head;
		head = head->next;
		free(tomp);
	}
}
