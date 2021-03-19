#include "lists.h"

/**
 * print_list - Function that prints linked list
 *
 * @h: linked list to print
 *
 * Return: count, the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; count++)
	{
		if ((*h).str == NULL)
		{
			printf("%s\n", "[0] (nil)");
			h = (*h).next;
		}
		else
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
			h = (*h).next;
		}
	}
	return (count);
}
