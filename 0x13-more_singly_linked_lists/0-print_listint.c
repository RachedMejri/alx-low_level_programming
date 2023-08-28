#include "lists.h"
#include <stdio.h>
/**
 * print_listint - nprinti all the elements min list
 * @h: pointer lil h list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
