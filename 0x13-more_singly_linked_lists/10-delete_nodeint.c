#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer to the beginning of the listint_t list.
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *del_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		del_node = *head;
		*head = (*head)->next;
		free(del_node);
		return (1);
	}

	prev_node = *head;

	for (i = 0; i < index - 1 && prev_node != NULL; i++)
		prev_node = prev_node->next;

	if (prev_node == NULL || prev_node->next == NULL)
		return (-1);

	del_node = prev_node->next;
	prev_node->next = del_node->next;
	free(del_node);

	return (1);
}
