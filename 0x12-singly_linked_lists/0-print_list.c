#include <stdio.h>
#include "lists.h"
/**
 * print_list -  a function that prints all the elements of a list_t list.
 *
 *@h: the head of the linked arrya
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		count++;
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");

		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (count);
}
