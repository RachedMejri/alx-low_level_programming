#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all and calculet the size of linked
 *
 *@h: the head of the linked arrya
 *
 * Return: size of the linked list
 */
size_t print_list(const list_t *h)
{
	int count;

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
