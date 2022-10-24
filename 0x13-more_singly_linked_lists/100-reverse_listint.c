#include "lists.h"

/**
* reverse_listint - function that reverses a listint_t linked list.
*
* @head: parameter double pointer to the head
*
* Return: The new node
*/


listint_t *reverse_listint(listint_t **head)
{
	 
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;
	
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
		*head = prev;
	return(prev);
}