#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that returns the number of elements in a linked list_t l
 * @h: pointer to the head of the list
 *
 * Return: size of the linklist
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
