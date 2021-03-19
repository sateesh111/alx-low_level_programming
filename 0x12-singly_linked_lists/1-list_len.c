#include "lists.h"

/**
 * list_len - function that returns number of elements in a linked list_t list
 *
 * @h: Linked list to count
 *
 * Return: count, number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; count++)
		h = (*h).next;
	return (count);
}
