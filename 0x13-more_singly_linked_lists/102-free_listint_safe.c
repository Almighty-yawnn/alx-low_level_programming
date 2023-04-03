#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely
 * @h: a pointer to a pointer to the first node of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;
	unsigned int visited = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		if (visited > 0 && current <= temp)
			break;

		visited++;

		temp = current;
		current = current->next;
		free(temp);
		size++;
	}

	*h = NULL;

	return (size);
}
