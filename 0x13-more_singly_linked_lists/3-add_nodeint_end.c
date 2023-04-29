#include "lists.h"

/**
 * add_nodeint_end -it is  the  program to add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @a: a element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int a)
{
	listint_t *new;
	listint_t *temp;

	(void)temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->a = a;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}
