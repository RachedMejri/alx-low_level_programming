#include "lists.h"
/**
 * get_nodeint_at_index - return the data in index place
 * @head: head
 * @index: index lil plsa
 *
 * Return: null or place data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
