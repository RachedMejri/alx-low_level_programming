#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tempnew;
	unsigned int len = 0;

	tempnew = malloc(sizeof(list_t));
	if (tempnew == NULL)
		return (NULL);

	while (str[len])
		len++;
	tempnew->len = len;
	tempnew->str = strdup(str);
	tempnew->next = *head;
	*head = tempnew;
	return (tempnew);
}
