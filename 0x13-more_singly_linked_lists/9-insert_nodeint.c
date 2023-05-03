#include "lists.h"

/**
 * sum_listint - check the code
 * @head: a
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nav, *new, *before;
	unsigned int i = 0;

	if (!head || !*head)
		return (NULL);
	nav = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (nav)
	{
		if (i == idx - 1)
		{
			before = nav;
		}
		if (i == idx)
		{
			new->next = nav;
			if (i)
				before->next = new;
			if (!i)
				*head = new;
			return (new);
		}
		nav = nav->next;
		i++;
	}

	return (NULL);
}
