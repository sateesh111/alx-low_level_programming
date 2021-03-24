#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 *
 * @head: pointer to head of linked list
 *
 * Return: pointer to head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = *head, *tmp2;

	if (tmp == NULL)
		return (NULL);

	tmp2 = (*tmp).next;
	(*tmp).next = NULL;
	for (; tmp2 != NULL;)
	{
		tmp = tmp2;
		tmp2 = (*tmp2).next;
		(*tmp).next = *head;
		*head = tmp;
	}
	return (*head);
}
