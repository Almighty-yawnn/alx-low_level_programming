#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr = head, *loop_node = NULL;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		count++;

		if (curr->next >= curr)
		{
			if (loop_node == NULL)
			{
				loop_node = curr->next;
				printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
			}
			if (loop_node == curr->next)
				break;
		}

		curr = curr->next;
	}

	return (count);
}
