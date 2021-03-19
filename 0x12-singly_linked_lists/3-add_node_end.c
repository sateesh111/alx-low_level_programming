#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a linked list
 *
 * @head: pointer to the head of  linked list
 * @str: string to add
 *
 * Return: add, pointer to updated linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *add = malloc(sizeof(list_t));
	list_t *old = *head;

	if (add == NULL)
		return (NULL);

	(*add).str = strdup(str);

	for (; str[len] != '\0';)
		len++;
	(*add).len = len;
	(*add).next = NULL;
	for (; old != NULL && (*old).next != NULL;)
		old = (*old).next;
	if (old == NULL)
		*head = add;
	else
		(*old).next = add;
	return (add);
}
