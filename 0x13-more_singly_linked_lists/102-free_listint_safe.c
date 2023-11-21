#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	current = *h;
	while (current)
	{
		count++;
		next = current->next;
		free(current);

		if (current <= next)
		{
			break;
		}
		current = next;
	}
	*h = NULL;
	return (count);
}
