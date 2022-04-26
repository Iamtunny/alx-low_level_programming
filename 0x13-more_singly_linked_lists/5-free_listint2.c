#include "lists.h"
/**
 * free_listint2 - function frees a listint_t list
 * @head: is a pointer to a linked list
 * Return: is alwayss void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	if (head == NULL)
		return;

	while (*head)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
