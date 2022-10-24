#include "lists.h"

/**
* print_listint - function that prints all the elements of
* a listint_t list.
*
* @head: Parameter Pointer to the head of the linked list
*
* Return: the number of nodes
*/


size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		printf("%i\n", head->n);
		head = head->next;
		n++;
	}
	return (n);
}

