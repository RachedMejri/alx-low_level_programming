#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t list.
 * @h: pointer to the head of the list
 *
 * Return: size of the linklist
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);
        h = h->next;
        count++;
    }
    return (count);
}