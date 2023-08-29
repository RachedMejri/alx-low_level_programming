#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to the head of the list
 * @n: value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tomp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		tomp = *head;
		while (tomp->next != NULL)
			tomp = tomp->next;
		tomp->next = newnode;
	}
	return (newnode);
}
