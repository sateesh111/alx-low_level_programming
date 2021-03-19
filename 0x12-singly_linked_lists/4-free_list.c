#include "lists.h"

/**
 * free_list - Write a function that frees a linked list
 *
 * @head: List to free
 */
void free_list(list_t *head)
{
	list_t *tmp;

	for (; head != NULL;)
	{
		tmp = (*head).next;
		free((*head).str);
		free(head);
		head = tmp;
	}
}
