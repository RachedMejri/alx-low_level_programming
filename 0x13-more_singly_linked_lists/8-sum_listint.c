#include "lists.h"
/**
 * sum_listint - sum , and cant find cat still
 * @head: head to the header
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int totalsum = 0;

	while (head != NULL)
	{
		totalsum += head->n;
		head = head->next;
	}
	return (totalsum);
}
