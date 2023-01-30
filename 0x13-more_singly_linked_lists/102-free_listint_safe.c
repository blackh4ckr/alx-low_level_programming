#include <stdlib.h>

#include <stdio.h>

#include "lists.h"



/**
 * free_listint_safe - frees a listint_t list
 *
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 *
 */

size_t free_listint_safe(listint_t **h)

{

	listint_t *slow = *h, *fast = *h, *temp;

	int count = 0;



	if (!h || !*h)

		return (0);



	while (fast && fast->next)

	{

		count++;

		slow = slow->next;

		fast = fast->next->next;



		if (fast == slow)

		{

			fast = *h;

			count = 0;

			while (fast != slow)

			{

				count++;

				slow = slow->next;

				fast = fast->next;

			}

			count++;

			slow = *h;

			while (fast->next != slow)

			{

				fast = fast->next;

				count++;

			}

			while (*h)

			{

				temp = (*h)->next;

				free(*h);

				*h = temp;

			}

			*h = NULL;

			return (count);

		}

	}



	while (*h)

	{

		temp = (*h)->next;

		free(*h);

		*h = temp;

		count++;

	}

	*h = NULL;



	return (count);

}


