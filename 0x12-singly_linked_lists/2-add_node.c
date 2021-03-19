#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning of a linked list
 *
 * @head: pointer to the head of  linked list
 * @str: string to add
 *
 * Return: *head, pointer to updated linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);

	(*add).str = strdup(str);

	for (; str[len] != '\0';)
		len++;
	(*add).len = len;
	(*add).next = *head;
	*head = add;
	return (*head);
}
