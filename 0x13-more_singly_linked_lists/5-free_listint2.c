#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: a
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *nav = *head;

	if (head == NULL || *head == NULL)
		return;

	while (*head)
	{
		nav = *head;
		*head = nav->next;
		free(nav);
	}
	*head = NULL;
}
