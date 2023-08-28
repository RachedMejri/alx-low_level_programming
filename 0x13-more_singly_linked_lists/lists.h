#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - linkedlist
 * @n: int
 * @next: next linked pointer
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);
int _putchar(char c);

#endif
