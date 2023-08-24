#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
