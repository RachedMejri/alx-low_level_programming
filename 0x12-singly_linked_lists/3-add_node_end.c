#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add new link at the ned
 * @head: thtte head
 * @str: string
 *
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newset, *temp;
	unsigned int len = 0;

	newset = malloc(sizeof(list_t));
	if (newset == NULL)
		return (NULL);
	while (str[len])
		len++;
	newset->next = NULL;
	newset->len = len;
	newset->str = strdup(str);
	if (*head == NULL)
		*head = newset;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newset;
	}
	return (newset);
}
