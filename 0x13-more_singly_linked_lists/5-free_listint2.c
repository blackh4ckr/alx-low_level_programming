#include <stdlib.h>

#include "lists.h"



/**
 * free_listint2 - function that frees a listint_t list and sets head to NULL
 *
 * @head: double pointer to head of the list
 *
 */

void free_listint2(listint_t **head)

{

	listint_t *temp;



	while (*head)

	{

		temp = *head;

		*head = (*head)->next;

		free(temp);

	}

	*head = NULL;

}


